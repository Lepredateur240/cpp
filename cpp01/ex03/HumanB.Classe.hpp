/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.Classe.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 11:21:01 by masenche          #+#    #+#             */
/*   Updated: 2026/05/05 14:16:22 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASSE_HPP
# define HUMANB_CLASSE_HPP

#include "Weapon.Classe.hpp"
#include <string>

class	HumanB{
private:
	std::string	_name;
	Weapon		*_weapon;

public:
	HumanB(const std::string& name);
	~HumanB();

	void	attack(void) const;
	void	setWeapon(Weapon &weapon);
};
#endif