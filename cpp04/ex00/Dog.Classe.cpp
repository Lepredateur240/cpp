/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.Classe.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:16:30 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 14:03:48 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.Classe.hpp"
#include "Animal.Classe.hpp"
#include <string>
#include <iostream>

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog Default was created!" << std::endl;
}

Dog::Dog(std::string type) : Animal(type){
	std::cout << "Dog " << type  << " was created!" << std::endl;
}

Dog::Dog(const Dog& copy){
	*this = copy;
	std::cout << "Dog " << this->_type << " was copied!" << std::endl;
}

Dog& Dog::operator=(const Dog& copy){
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "Dog " << this->_type << " was assigned!" << std::endl;
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog " << this->_type << " was destroyed!" << std::endl;
}

void	Dog::makeSound() const{
	std::cout << "Dog: *Wouaf ! Wouaf !*" << std::endl;
}