/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Classe.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 09:44:54 by masenche          #+#    #+#             */
/*   Updated: 2026/05/05 14:06:23 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <string>
class	Zombie{

private:
	std::string	_name;

public:
	Zombie();
	~Zombie(void);

	void	announce(void) const;
	void	setName(const std::string& name);
};

 Zombie*	zombieHorde(int N, const std::string& name);

#endif