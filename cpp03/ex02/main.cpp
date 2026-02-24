/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:16:49 by masenche          #+#    #+#             */
/*   Updated: 2026/02/24 22:59:37 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.Classe.hpp"
#include "ScavTrap.Classe.hpp"
#include "FragTrap.Classe.hpp"

int	main(void) {
	ClapTrap a("ClapTrapA");
	ClapTrap b("ClapTrapB");

	a.attack("ClapTrapB");
	b.takeDamage(3);
	b.beRepaired(5);
	b.attack("ClapTrapA");
	a.takeDamage(5);
	a.beRepaired(3);

	ScavTrap c("ScavTrapC");
	c.attack("ClapTrapA");
	c.guardGate();

	FragTrap d("FragTrapD");
	d.attack("ClapTrapB");
	d.highFivesGuys();
	return 0;
}