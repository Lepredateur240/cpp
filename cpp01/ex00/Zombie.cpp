/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 09:45:23 by masenche          #+#    #+#             */
/*   Updated: 2026/02/21 10:36:44 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Classe.hpp"
#include <iostream>
#include <ostream>

Zombie::Zombie(std::string name) : _name(name){
	
}

Zombie::~Zombie(void){
	std::cout << _name << ": has been destroyed." << std::endl;
}

void Zombie::announce(void){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl ;
}
