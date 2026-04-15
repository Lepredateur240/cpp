/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 09:45:23 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:04:00 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Classe.hpp"
#include <iostream>
#include <ostream>

Zombie::Zombie(std::string name) : _name(name){
	return;
}

Zombie::~Zombie(void){
	std::cout << _name << ": has been destroyed." << std::endl;
	return;
}

void Zombie::announce(void){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl ;
}
