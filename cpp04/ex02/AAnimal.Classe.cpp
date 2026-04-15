/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.Classe.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:19:35 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:31:16 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.Classe.hpp"
#include <iostream>
#include <string>

AAnimal::AAnimal() : _type("AAnimal"){
	std::cout << "AAnimal Default was created!" << std::endl;
	return;
}

AAnimal::AAnimal(std::string type) : _type(type){
	std::cout << "AAnimal " << type  << " was created!" << std::endl;
	return;
}

AAnimal::AAnimal(const AAnimal& copy){
	*this = copy;
	std::cout << "AAnimal " << this->_type << " was copied!" << std::endl;
	return;
}

AAnimal& AAnimal::operator=(const AAnimal& copy){
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "AAnimal " << this->_type << " was assigned!" << std::endl;
	return *this;
}

AAnimal::~AAnimal(void){
	std::cout << "AAnimal " << this->_type << " was destroyed!" << std::endl;
	return;
}

std::string AAnimal::getType() const{
	return this->_type;
}
