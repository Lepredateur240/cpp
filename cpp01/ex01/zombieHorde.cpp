/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 10:39:26 by masenche          #+#    #+#             */
/*   Updated: 2026/02/21 10:59:13 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Classe.hpp"
#include <sstream>

Zombie* zombieHorde(int N, std::string name){
	Zombie *zombiehorde = new Zombie[N];
	for (int i = 0; i < N ; i++){
		std::stringstream ss;
        ss << name << " " << i;
        zombiehorde[i].setName(ss.str());
	}
	return (zombiehorde);
}