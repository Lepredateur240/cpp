/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 09:45:23 by masenche          #+#    #+#             */
/*   Updated: 2026/04/20 18:32:40 by masenche         ###   ########.fr       */
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

void Zombie::announce(void) const{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl ;
}
