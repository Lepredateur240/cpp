/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.Classe.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 11:21:07 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:08:32 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASSE_HPP
# define WEAPON_CLASSE_HPP

#include <string>

class Weapon{
private:
	std::string _type;

public:
	Weapon(std::string type);
	~Weapon();
	const std::string&	getType(void);
	void				setType(std::string type);
	
};
#endif