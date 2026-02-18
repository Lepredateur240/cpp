/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:25:42 by masenche          #+#    #+#             */
/*   Updated: 2026/02/18 15:05:55 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>

PhoneBook::PhoneBook(void){
	index = 0;
	return;
}

PhoneBook::~PhoneBook(void){
	return;
}

void	PhoneBook::ADD(){
	Contact &current = _contact[index % 8];

	std::cout << "Enter the first name: ";
	std::cin >> current.first_name;
	std::cout << "Enter the last name : ";
	std::cin >> current.last_name;
	std::cout << "Enter the nickname : ";
	std::cin >> current.nickname;
	std::cout << "Enter the secret : ";
	std::cin >> current.secret;
	std::cout << "Enter the number : ";
	std::cin >> current.number;
	
}

void	PhoneBook::SEARCH(){
	
}