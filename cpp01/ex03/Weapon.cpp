/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 11:18:42 by masenche          #+#    #+#             */
/*   Updated: 2026/02/21 13:56:59 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string type) : _type(type){
	_type = getType();
	setType(std::string (_type));
}

Weapon::~Weapon(){
	
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}

const std::string& Weapon::getType() {
    return this->_type;
}