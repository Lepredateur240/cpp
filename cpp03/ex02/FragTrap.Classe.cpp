/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.Classe.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 22:56:12 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 13:28:40 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.Classe.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap parameterized constructor called for " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy) {
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy){
	if (this != &copy){
		this->_name = copy._name;
		this->_hitPoints = copy._hitPoints;
		this->_energyPoints = copy._energyPoints;
		this->_attackDamage = copy._attackDamage;
	}
	std::cout << "FragTrap " << this->_name << " assigned!" << std::endl;
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->_name << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << this->_name << " is requesting a high five!" << std::endl;
}