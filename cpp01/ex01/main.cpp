/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 09:46:03 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:04:29 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Classe.hpp"

int	main(void){ 
	int 	N = 8;
	Zombie* Horde = zombieHorde(N, "Soldat");

	for (int i = 0; i < N; i++)
		Horde[i].announce();
	delete[] Horde; 
	return (0);
}