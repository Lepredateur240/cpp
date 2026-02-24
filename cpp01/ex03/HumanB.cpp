/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 11:20:52 by masenche          #+#    #+#             */
/*   Updated: 2026/02/21 14:16:18 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>
#include <string>

HumanB::HumanB(std::string name) : _name(name){
	
}

HumanB::~HumanB(){
	
}

void HumanB::attack(void){
	std::cout << _name << "> attacks with their " << _weapon->getType() << std::endl ;
}

void	HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
	attack();
}