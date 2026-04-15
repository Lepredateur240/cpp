/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.Classe.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 22:34:59 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:22:23 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.Classe.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap parameterized constructor called for " << name << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
	return;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy){
	if (this != &copy){
		this->_name = copy._name;
		this->_hitPoints = copy._hitPoints;
		this->_energyPoints = copy._energyPoints;
		this->_attackDamage = copy._attackDamage;
	}
	std::cout << "ScavTrap " << this->_name << " assigned!" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap " << this->_name << " destroyed!" << std::endl;
	return;
}

void ScavTrap::attack(const std::string& target){
	if (this->_energyPoints > 0 && this->_hitPoints > 0){
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "ScavTrap " << this->_name << " cannot attack!" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
}