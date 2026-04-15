/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.Classe.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:03:01 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:28:20 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.Classe.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
	std::cout << "WrongCat Default was created!" << std::endl;
	return;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type){
	std::cout << "WrongCat " << type  << " was created!" << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat& copy){
	*this = copy;
	std::cout << "WrongCat " << this->_type << " was copied!" << std::endl;
	return;
}

WrongCat& WrongCat::operator=(const WrongCat& copy){
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "WrongCat " << this->_type << " was assigned!" << std::endl;
	return *this;
}

WrongCat::~WrongCat(void){
	std::cout << "WrongCat " << this->_type << " was destroyed!" << std::endl;
	return;
}

void	WrongCat::makeSound() const{
	std::cout << "WrongCat: *Wouaf ! Wouaf !*" << std::endl;
}