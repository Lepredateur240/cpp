/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.Classe.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 11:20:54 by masenche          #+#    #+#             */
/*   Updated: 2026/05/05 14:17:09 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASSE_HPP
# define HUMANA_CLASSE_HPP

#include "Weapon.Classe.hpp"
#include <string>

class	HumanA{
private:
	std::string	_name;
	Weapon		*_weapon;

public:
	HumanA(const std::string& name, Weapon& type_weapon);
	~HumanA();

	void	attack(void) const;
};

#endif