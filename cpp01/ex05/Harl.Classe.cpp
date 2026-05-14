/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.Classe.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:21:53 by masenche          #+#    #+#             */
/*   Updated: 2026/05/05 14:43:49 by masenche         ###   ########.fr       */
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
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::INFO(){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::WARNING(){
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::ERROR(){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(const std::string& level){
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ptr[4])() = {&Harl::DEBUG, &Harl::INFO, &Harl::WARNING, &Harl::ERROR};

	for (size_t i = 0; i < 4; i++){
		if (levels[i] == level){
			(this->*ptr[i])();
			return;
		}
	}
}