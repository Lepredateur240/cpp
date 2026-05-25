/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 19:08:26 by masenche          #+#    #+#             */
/*   Updated: 2026/05/23 15:39:41 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <string>
# include <fstream>
# include <sys/stat.h>
# include <cstdlib>
# include <sstream>
# include <algorithm>

class BitcoinExchange {
private:
	std::map<std::string, double> _database;

	bool _isValidDate(const std::string& date) const;
	bool _isLeapYear(int year) const;
	void _validateValue(double val, bool isInput) const;
	void _verifFile(const std::string& path) const;

public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& other);
	BitcoinExchange& operator=(const BitcoinExchange& other);
	~BitcoinExchange();

	void loadDatabase(const std::string& path);
	void processInput(const std::string& path);
};

#endif
