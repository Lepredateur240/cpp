/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 11:21:07 by masenche          #+#    #+#             */
/*   Updated: 2026/02/21 13:57:06 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
class Weapon{
private:
	std::string _type;

public:
	Weapon(std::string type);
	~Weapon();
	const std::string& getType(void);
	void	setType(std::string type);
	
};
#endif