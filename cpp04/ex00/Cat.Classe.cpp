/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.Classe.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:16:28 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 14:01:04 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.Classe.hpp"
#include "Animal.Classe.hpp"
#include <iostream>
#include <string>

Cat::Cat() : Animal("Cat"){
	std::cout << "Cat Default was created!" << std::endl;
}

Cat::Cat(std::string type) : Animal(type){
	std::cout << "Cat " << type  << " was created!" << std::endl;
}

Cat::Cat(const Cat& copy){
	*this = copy;
	std::cout << "Cat " << this->_type << " was copied!" << std::endl;
}

Cat& Cat::operator=(const Cat& copy){
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "Cat " << this->_type << " was assigned!" << std::endl;
	return *this;
}

Cat::~Cat(){
	std::cout << "Cat " << this->_type << " was destroyed!" << std::endl;
}

void	Cat::makeSound() const{
	std::cout << "Cat: *Miaou ! Miaouuu !*" << std::endl;
}
