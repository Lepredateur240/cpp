/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.Classe.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:20:11 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 14:30:02 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.Classe.hpp"
#include <iostream>

Brain::Brain(){
	std::cout << "Brain is on!" << std::endl;
}

Brain::Brain(const Brain& copy){
	*this = copy;
	std::cout << "Copy of the brain's contents." << std::endl;
}

Brain& Brain::operator=(const Brain& copy){
	std::cout << "Brain idea was transfert!" << std::endl;
	if (this != &copy){
		for (int i = 0; i < 100; i++)
            this->ideas[i] = copy.ideas[i];
    }
	return *this;
}

Brain::~Brain(){
	std::cout << "Brain is off!" << std::endl;
}