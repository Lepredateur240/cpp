/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.Classe.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 11:21:07 by masenche          #+#    #+#             */
/*   Updated: 2026/04/20 18:46:41 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASSE_HPP
# define WEAPON_CLASSE_HPP

#include <string>

class Weapon{
private:
	std::string _type;

public:
	Weapon(const std::string& type);
	~Weapon();
	const std::string&	getType(void) const;
	void				setType(const std::string& type);
	
};
#endif