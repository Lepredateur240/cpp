/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.Classe.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:21:53 by masenche          #+#    #+#             */
/*   Updated: 2026/05/05 16:42:38 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.Classe.hpp"

Harl::Harl(){
	return;
}

Harl::~Harl(){
	return;
}

void	Harl::DEBUG(){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
}

void	Harl::INFO(){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl << std::endl; 
}

void	Harl::WARNING(){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."<< std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::ERROR(){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void	Harl::complain(const std::string& level){
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (i < 4 && levels[i] != level)
		i++;
	switch (i) {
	case 0:
		this->DEBUG();
	case 1:
		this->INFO();
	case 2:
		this->WARNING();
	case 3:
		this->ERROR();
		break;
	default:
		std::cout << "Error:" << std::endl;
		break;
	}
}