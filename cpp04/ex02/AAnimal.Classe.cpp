/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.Classe.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:19:35 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 14:45:52 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.Classe.hpp"
#include <iostream>
#include <string>

AAnimal::AAnimal() : _type("AAnimal"){
	std::cout << "AAnimal Default was created!" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type){
	std::cout << "AAnimal " << type  << " was created!" << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy){
	*this = copy;
	std::cout << "AAnimal " << this->_type << " was copied!" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& copy){
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "AAnimal " << this->_type << " was assigned!" << std::endl;
	return *this;
}

AAnimal::~AAnimal(){
	std::cout << "AAnimal " << this->_type << " was destroyed!" << std::endl;
}

std::string AAnimal::getType() const{
	return this->_type;
}
