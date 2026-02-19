/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:25:42 by masenche          #+#    #+#             */
/*   Updated: 2026/02/19 17:15:40 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iomanip>
#include <iostream>
#include <limits>

PhoneBook::PhoneBook(void){
	index = 0;
	return;
}

PhoneBook::~PhoneBook(void){
	return;
}

void	PhoneBook::ADD(){
	Contact &current = _contact[index % 8];
	Contact temp;

	std::cout << "First Name: ";
    if (!std::getline(std::cin, temp.first_name) || temp.first_name.empty())
		return;
	std::cout << "Last Name: ";
    if (!std::getline(std::cin, temp.last_name) || temp.last_name.empty()) 
		return;
	std::cout << "Nickname : ";
	if (!std::getline(std::cin, temp.nickname) || temp.nickname.empty()) 
		return;
	std::cout << "Phone Number: ";
    std::getline(std::cin, temp.number);
	for (size_t i = 0; temp.number[i]; i++){
		if (!isdigit(temp.number[i])){
			std::cout << "Error: Invalid number format" << std::endl;
			return;
		}
	}
	std::cout << "Secret : ";
	if (!std::getline(std::cin, temp.secret) || temp.secret.empty()) 
		return;
	current = temp;
	index++;
	std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::SEARCH() {
    std::cout << "|" << std::setw(10) << "Index"
              << "|" << std::setw(10) << "First Name"
              << "|" << std::setw(10) << "Last Name"
              << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
    for (int i = 0; i < 8; i++) {
        std::cout << "|" << std::setw(10) << i
                  << "|" << std::setw(10) << formatColumn(_contact[i].first_name)
                  << "|" << std::setw(10) << formatColumn(_contact[i].last_name)
                  << "|" << std::setw(10) << formatColumn(_contact[i].nickname) << "|" << std::endl;
    }
    std::string input;
    std::cout << "\nEnter the index of the contact to display: ";
    std::getline(std::cin, input);

    if (input.length() == 1 && input[0] >= '0' && input[0] <= '7') {
        int i = input[0] - '0';
        std::cout << "First Name: " << _contact[i].first_name << std::endl;
        std::cout << "Last Name : " << _contact[i].last_name << std::endl;
        std::cout << "Nickname  : " << _contact[i].nickname << std::endl;
        std::cout << "Phone     : " << _contact[i].number << std::endl;
        std::cout << "Secret    : " << _contact[i].secret << std::endl;
    } else
        std::cout << "Invalid index!" << std::endl;
}