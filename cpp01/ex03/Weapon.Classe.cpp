/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.Classe.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 11:18:42 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:10:54 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.Classe.hpp"
#include <string>

Weapon::Weapon(std::string type) : _type(type){
	_type = getType();
	setType(std::string (_type));
	return;
}

Weapon::~Weapon(){
	return;
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}

const std::string&	Weapon::getType() {
    return this->_type;
}