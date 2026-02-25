/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:16:49 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:21:28 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.Classe.hpp"

int	main(void) {
	ClapTrap a("ClapTrapA");
	ClapTrap b("ClapTrapB");

	a.attack("ClapTrapB");
	b.takeDamage(3);
	b.beRepaired(5);
	b.attack("ClapTrapA");
	a.takeDamage(5);
	a.beRepaired(3);
	return (0);
}