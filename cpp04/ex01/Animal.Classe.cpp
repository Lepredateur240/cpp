/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.Classe.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:19:35 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 14:00:36 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.Classe.hpp"
#include <iostream>
#include <string>

Animal::Animal() : _type("Animal"){
	std::cout << "Animal Default was created!" << std::endl;
}

Animal::Animal(std::string type) : _type(type){
	std::cout << "Animal " << type  << " was created!" << std::endl;
}

Animal::Animal(const Animal& copy){
	*this = copy;
	std::cout << "Animal " << this->_type << " was copied!" << std::endl;
}

Animal& Animal::operator=(const Animal& copy){
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "Animal " << this->_type << " was assigned!" << std::endl;
	return *this;
}

Animal::~Animal(){
	std::cout << "Animal " << this->_type << " was destroyed!" << std::endl;
}

void	Animal::makeSound() const{
	std::cout << "Animal: *sound of an unknown animal*" << std::endl;
}

std::string Animal::getType() const{
	return this->_type;
}
