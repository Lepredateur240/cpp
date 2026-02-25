/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.Classe.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:16:30 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 14:45:01 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.Classe.hpp"
#include "AAnimal.Classe.hpp"
#include "Brain.Classe.hpp"
#include <string>
#include <iostream>

Dog::Dog() : AAnimal("Dog"){
	_ideas = new Brain();
	std::cout << "Dog Default was created with a Brain!" << std::endl;
}

Dog::Dog(std::string type) : AAnimal(type){
	_ideas = new Brain();
	std::cout << "Dog " << type  << " was created!" << std::endl;
}

Dog::Dog(const Dog& copy){
	this->_ideas = new Brain();
	*(this->_ideas) = *(copy._ideas);
	std::cout << "Dog " << this->_type << " was copied with its own Brain!" << std::endl;
}

Dog& Dog::operator=(const Dog& copy){
	if (this != &copy) {
		this->_type = copy._type;
		if (this->_ideas && copy._ideas)
			*(this->_ideas) = *(copy._ideas);
	}
	return *this;
}

Dog::~Dog(){
	delete _ideas;
	std::cout << "Dog " << this->_type << " was destroyed! (Brain freed)" << std::endl;
}

void	Dog::makeSound() const{
	std::cout << "Dog: *Wouaf ! Wouaf !*" << std::endl;
}