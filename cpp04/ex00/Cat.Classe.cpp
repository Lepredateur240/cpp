/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.Classe.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:16:28 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:25:18 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.Classe.hpp"
#include "Animal.Classe.hpp"
#include <iostream>
#include <string>

Cat::Cat() : Animal("Cat"){
	std::cout << "Cat Default was created!" << std::endl;
	return;
}

Cat::Cat(std::string type) : Animal(type){
	std::cout << "Cat " << type  << " was created!" << std::endl;
	return;
}

Cat::Cat(const Cat& copy){
	*this = copy;
	std::cout << "Cat " << this->_type << " was copied!" << std::endl;
	return;
}

Cat& Cat::operator=(const Cat& copy){
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "Cat " << this->_type << " was assigned!" << std::endl;
	return *this;
}

Cat::~Cat(void){
	std::cout << "Cat " << this->_type << " was destroyed!" << std::endl;
	return;
}

void	Cat::makeSound() const{
	std::cout << "Cat: *Miaou ! Miaouuu !*" << std::endl;
}
