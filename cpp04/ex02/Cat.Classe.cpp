/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.Classe.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:16:28 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 14:44:50 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.Classe.hpp"
#include "AAnimal.Classe.hpp"
#include "Brain.Classe.hpp"
#include <iostream>
#include <string>

Cat::Cat() : AAnimal("Cat"){
	_ideas = new Brain();
	std::cout << "Cat Default was created with a Brain!" << std::endl;
}

Cat::Cat(std::string type) : AAnimal(type){
	_ideas = new Brain();
	std::cout << "Cat " << type  << " was created!" << std::endl;
}

Cat::Cat(const Cat& copy){
	this->_ideas = new Brain();
	*(this->_ideas) = *(copy._ideas);
	std::cout << "Cat " << this->_type << " was copied with its own Brain!" << std::endl;
}

Cat& Cat::operator=(const Cat& copy){
	if (this != &copy) {
		this->_type = copy._type;
		if (this->_ideas && copy._ideas)
			*(this->_ideas) = *(copy._ideas);
	}
	return *this;
}

Cat::~Cat(){
	delete _ideas;
	std::cout << "Cat " << this->_type << " was destroyed! (Brain freed)" << std::endl;
}

void	Cat::makeSound() const{
	std::cout << "Cat: *Miaou ! Miaouuu !*" << std::endl;
}
