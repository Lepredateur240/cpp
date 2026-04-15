/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.Classe.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:16:28 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:29:58 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.Classe.hpp"
#include "Animal.Classe.hpp"
#include "Brain.Classe.hpp"
#include <iostream>
#include <string>

Cat::Cat() : Animal("Cat"){
	_ideas = new Brain();
	std::cout << "Cat Default was created with a Brain!" << std::endl;
	return;
}

Cat::Cat(std::string type) : Animal(type){
	_ideas = new Brain();
	std::cout << "Cat " << type  << " was created!" << std::endl;
	return;
}

Cat::Cat(const Cat& copy){
	this->_ideas = new Brain();
	*(this->_ideas) = *(copy._ideas);
	std::cout << "Cat " << this->_type << " was copied with its own Brain!" << std::endl;
	return;
}

Cat& Cat::operator=(const Cat& copy){
	if (this != &copy) {
		this->_type = copy._type;
		if (this->_ideas && copy._ideas)
			*(this->_ideas) = *(copy._ideas);
	}
	return *this;
}

Cat::~Cat(void){
	delete _ideas;
	std::cout << "Cat " << this->_type << " was destroyed! (Brain freed)" << std::endl;
	return;
}

void	Cat::makeSound() const{
	std::cout << "Cat: *Miaou ! Miaouuu !*" << std::endl;
}
