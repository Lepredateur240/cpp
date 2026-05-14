/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.Classe.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 11:18:42 by masenche          #+#    #+#             */
/*   Updated: 2026/04/20 18:46:36 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.Classe.hpp"
#include <string>

Weapon::Weapon(const std::string& type) : _type(type){
	_type = getType();
	setType(std::string (_type));
	return;
}

Weapon::~Weapon(){
	return;
}

void	Weapon::setType(const std::string& type) {
	this->_type = type;
}

const std::string&	Weapon::getType() const{
    return this->_type;
}