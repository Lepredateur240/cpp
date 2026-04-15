/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.Classe.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 21:59:19 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:22:48 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.Classe.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap Default created!" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap " << this->_name << " created!" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap& copy){
	*this = copy;
	std::cout << "ClapTrap " << this->_name << " copied!" << std::endl;
	return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy){
	if (this != &copy){
		this->_name = copy._name;
		this->_hitPoints = copy._hitPoints;
		this->_energyPoints = copy._energyPoints;
		this->_attackDamage = copy._attackDamage;
	}
	std::cout << "ClapTrap " << this->_name << " assigned!" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap " << this->_name << " destroyed!" << std::endl;
	return;
}

void ClapTrap::attack(const std::string& target){
	if (this->_energyPoints > 0 && this->_hitPoints > 0){
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " cannot attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->_hitPoints > 0){
		if (amount >= this->_hitPoints)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
			
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage! Current HP: " << this->_hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount){
	if (this->_energyPoints > 0 && this->_hitPoints > 0){
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " points! Current HP: " << this->_hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " cannot be repaired!" << std::endl;
}
