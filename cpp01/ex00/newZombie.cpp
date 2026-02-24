/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 09:46:08 by masenche          #+#    #+#             */
/*   Updated: 2026/02/21 10:21:53 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Classe.hpp"

Zombie	*newZombie(std::string name){
	Zombie	*zombie;
	
	zombie = new Zombie(name);
	return zombie;
}