/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Classe.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 09:44:54 by masenche          #+#    #+#             */
/*   Updated: 2026/02/24 15:32:37 by masenche         ###   ########.fr       */
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

	void	announce(void);
	void	setName(std::string);
	Zombie*	zombieHorde( int N, std::string name );
};

Zombie*	zombieHorde(int N, std::string name);

#endif