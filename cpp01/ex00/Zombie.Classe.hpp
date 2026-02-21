/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Classe.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 09:44:54 by masenche          #+#    #+#             */
/*   Updated: 2026/02/21 10:37:09 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <string>
class	Zombie{

private:
		std::string	_name;

public:
	Zombie(std::string _name);
	~Zombie(void);

	void	announce(void);
	Zombie	*newZombie(std::string name);
	void	randomChump(std::string name);
};



#endif