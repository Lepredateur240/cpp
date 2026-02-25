/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.Classe.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:07:49 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 14:15:42 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.Classe.hpp"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal() : _type("WrongAnimal"){
	std::cout << "WrongAnimal Default was created!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type){
	std::cout << "WrongAnimal " << type  << " was created!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy){
	*this = copy;
	std::cout << "WrongAnimal " << this->_type << " was copied!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy){
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "WrongAnimal " << this->_type << " was assigned!" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal " << this->_type << " was destroyed!" << std::endl;
}

void	WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal: *sound of an unknown WrongAnimal*" << std::endl;
}

std::string WrongAnimal::getType() const{
	return this->_type;
}