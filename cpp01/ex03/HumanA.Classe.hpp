/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.Classe.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 11:20:54 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:10:04 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASSE_HPP
# define HUMANA_CLASSE_HPP

#include "Weapon.Classe.hpp"
#include <string>

class	HumanA{
private:
	std::string	_name;
	Weapon		&_weapon;

public:
	HumanA(std::string name, Weapon &type_weapon);
	~HumanA();

	void	attack(void);
};

#endif