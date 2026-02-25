/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 11:20:57 by masenche          #+#    #+#             */
/*   Updated: 2026/02/21 13:33:34 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.Classe.hpp"
#include "Weapon.Classe.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &type_weapon) : _name(name), _weapon(type_weapon){
	attack();
	return;
}

HumanA::~HumanA(void){
	return;
}

void	HumanA::attack(void){
	std::cout << _name << "> attacks with their " << _weapon.getType() << std::endl ;
}