/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:25:42 by masenche          #+#    #+#             */
/*   Updated: 2026/04/17 16:27:12 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iomanip>
#include <iostream>
#include <ctype.h>

PhoneBook::PhoneBook(void){
	_index =  -1;
	return;
}

PhoneBook::~PhoneBook(void){
	return;
}

void	PhoneBook::ADD(){
	if (_index == -1)
		_index = 0;
	Contact &current = _contact[_index % 8];
	Contact temp;
	std::string temp_char;

	std::cout << "First Name: ";
	if (!std::getline(std::cin, temp_char) || temp_char.empty())
	{
		std::cout << "Error: First name cannot be empty" << std::endl;
		return;
	}
	temp.setFirstName(temp_char);
	std::cout << "Last Name: ";
	if (!std::getline(std::cin, temp_char) || temp_char.empty())
	{
		std::cout << "Error: Last name cannot be empty" << std::endl;
		return;
	}
	temp.setLastName(temp_char);
	std::cout << "Nickname : ";
	if (!std::getline(std::cin, temp_char) || temp_char.empty())
	{
		std::cout << "Error: Nickname cannot be empty" << std::endl;
		return;
	}
	temp.setNickname(temp_char);
	std::cout << "Phone Number: ";
	if (!std::getline(std::cin, temp_char) || temp_char.empty())
	{
		std::cout << "Error: Phone number cannot be empty" << std::endl;
		return;
	}
	temp.setNumber(temp_char);
	for (size_t i = 0; temp.getNumber()[i]; i++){
		if (!isdigit(temp.getNumber()[i])){
			std::cout << "Error: Invalid number format" << std::endl;
			return;
		}
	}
	std::cout << "Secret : ";
	if (!std::getline(std::cin, temp_char) || temp_char.empty())
	{
		std::cout << "Error: Secret cannot be empty" << std::endl;
		return;
	}
	temp.setSecret(temp_char);
	current = temp;
	_index++;
	std::cout << "Contact added successfully!" << std::endl;
}

void	PhoneBook::SEARCH() {
	std::string input;
	int 		i = 0;

	if (_index == -1) {
		std::cout << "No contacts to display!" << std::endl;
		return;
	}
	std::cout << "|" << std::setw(10) << "Index"
			  << "|" << std::setw(10) << "First Name"
			  << "|" << std::setw(10) << "Last Name"
			  << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < 8; i++) {
		if (!_contact[i].getFirstName().empty()) {
		std::cout << "|" << std::setw(10) << i
				  << "|" << std::setw(10) << formatColumn(_contact[i].getFirstName())
				  << "|" << std::setw(10) << formatColumn(_contact[i].getLastName())
				  << "|" << std::setw(10) << formatColumn(_contact[i].getNickname()) << "|" << std::endl;
		}
	}
	std::cout << "\nEnter the index of the contact to display: ";
	std::getline(std::cin, input);
	if ((input.length() == 1 && input[0] >= '0' && input[0] <= '7')){
		i = input[0] - '0';
		if (!_contact[i].getFirstName().empty())
			std::cout << "First Name: " << _contact[i].getFirstName() << std::endl;
		if (!_contact[i].getLastName().empty())
			std::cout << "Last Name : " << _contact[i].getLastName() << std::endl;
		if (!_contact[i].getNickname().empty())
			std::cout << "Nickname  : " << _contact[i].getNickname() << std::endl;
		if (!_contact[i].getNumber().empty())
			std::cout << "Phone     : " << _contact[i].getNumber() << std::endl;
		if (!_contact[i].getSecret().empty())
			std::cout << "Secret    : " << _contact[i].getSecret() << std::endl;
		else
			std::cout << "Invalid index!" << std::endl;
	}
}

std::string	PhoneBook::formatColumn(std::string str){
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}