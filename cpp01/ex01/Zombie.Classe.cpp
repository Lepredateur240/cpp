/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Classe.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 09:45:23 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:05:27 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Classe.hpp"
#include <iostream>
#include <ostream>

Zombie::Zombie(){
	return;
}

Zombie::~Zombie(void){
	std::cout << _name << ": has been destroyed." << std::endl;
	return;
}

void	Zombie::announce(void){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl ;
}

void	Zombie::setName(std::string name){
	this->_name = name;
}