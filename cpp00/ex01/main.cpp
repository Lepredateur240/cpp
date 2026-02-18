/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:25:16 by masenche          #+#    #+#             */
/*   Updated: 2026/02/18 15:05:04 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	PhoneBook	instance;
	std::string	command;

	while (true) {
		std::cout << "Enter command (ADD, SEARCH, EXIT ;)" ;
		if (!std::getline(std::cin, command))
			break ;
		if (command == "ADD")
			instance.ADD();
		if (command == "SEARCH")
			instance.SEARCH();
		if (command == "EXIT")
			break ;
	}
	return (0);
}