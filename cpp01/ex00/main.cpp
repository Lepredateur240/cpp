/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 09:46:03 by masenche          #+#    #+#             */
/*   Updated: 2026/02/24 15:33:46 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Classe.hpp"
#include <sstream>

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void){
	std::string name[8];
	for (int i = 0; i < 8; i++) {
		std::stringstream ss;
		ss << "Zombie " << i;
		name[i] = ss.str();
	}
	for (int i = 0; i < 4; i++) {
		Zombie *heap = newZombie(name[i]);
		heap->announce();
		delete (heap);
	}
	for (int i = 4; i < 8; i++) {
		randomChump(name[i]);
	}
	return (0);
}