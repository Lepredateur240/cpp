/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 19:08:30 by masenche          #+#    #+#             */
/*   Updated: 2026/05/25 15:26:27 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
	*this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
	if (this != &other)
		this->_database = other._database;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

// Helpers
bool BitcoinExchange::_isLeapYear(int year) const {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool BitcoinExchange::_isValidDate(const std::string& date) const {
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		return false;

	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	if (month < 1 || month > 12 || day < 1 || year < 2008)
		return false;

	int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (month == 2 && _isLeapYear(year))
		daysInMonth[2] = 29;

	if (day > daysInMonth[month])
		return false;
	return true;
}

void BitcoinExchange::_validateValue(double val, bool isInput) const {
	if (val < 0)
		throw std::runtime_error("not a positive number.");
	if (isInput && val > 1000)
		throw std::runtime_error("too large a number.");
}

void BitcoinExchange::_verifFile(const std::string& path) const {
	struct stat info;
	if (stat(path.c_str(), &info) != 0)
		throw std::runtime_error("could not open file.");
	if (S_ISDIR(info.st_mode))
		throw std::runtime_error("is a directory.");
}

// Logic
void BitcoinExchange::loadDatabase(const std::string& path) {
	_verifFile(path);
	std::ifstream file(path.c_str());
	std::string line;

	if (!std::getline(file, line))
		throw std::runtime_error("Empty database.");

	while (std::getline(file, line)) {
		size_t comma = line.find(',');
		if (comma == std::string::npos) continue;

		std::string date = line.substr(0, comma);
		double rate = std::strtod(line.substr(comma + 1).c_str(), NULL);
		
		if (_isValidDate(date))
			_database[date] = rate;
	}
}

void BitcoinExchange::processInput(const std::string& path) {
	_verifFile(path);
	std::ifstream file(path.c_str());
	std::string line;

	if (!std::getline(file, line))
		return;
	if (line != "date | value") {
		std::cerr << "Error: invalid header => " << line << std::endl;
	}

	while (std::getline(file, line)) {
		if (line.empty()) continue;

		size_t pipe = line.find('|');
		if (pipe == std::string::npos) {
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}

		std::string date = line.substr(0, pipe);
		date.erase(date.find_last_not_of(" \n\r\t") + 1);
		std::string strVal = line.substr(pipe + 1);
		char* endptr;
		double val = std::strtod(strVal.c_str(), &endptr);

		try {
			if (!_isValidDate(date))
				throw std::runtime_error("bad input => " + date);
			
			if (*endptr != '\0' && !std::isspace(*endptr))
				 throw std::runtime_error("bad input => " + line);
			_validateValue(val, true);
			std::map<std::string, double>::iterator it = _database.lower_bound(date);
			if (it == _database.end() || (it->first != date && it != _database.begin())) {
				if (it->first != date)
					--it;
			}
			if (it == _database.end() || (it == _database.begin() && it->first > date))
				throw std::runtime_error("date too early => " + date);
			std::cout << date << " => " << val << " = " << (val * it->second) << std::endl;
		} catch (const std::exception& e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
}
