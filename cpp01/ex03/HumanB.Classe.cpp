/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.Classe.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 11:20:52 by masenche          #+#    #+#             */
/*   Updated: 2026/05/05 14:24:58 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.Classe.hpp"
#include <iostream>
#include <ostream>
#include <string>

HumanB::HumanB(const std::string& name) : _name(name), _weapon(NULL){
	return;
}

HumanB::~HumanB(){
	return;
}

void	HumanB::attack(void) const{
	if (_weapon == NULL)
		std::cout << _name << "> attacks with their bare hands!" << std::endl;
	else
		std::cout << _name << "> attacks with their " << _weapon->getType() << std::endl ;
}

void	HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
	attack();
}