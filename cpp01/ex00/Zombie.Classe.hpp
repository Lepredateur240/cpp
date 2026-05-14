/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Classe.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 09:44:54 by masenche          #+#    #+#             */
/*   Updated: 2026/05/05 14:03:54 by masenche         ###   ########.fr       */
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

	void	announce(void) const;
};

Zombie	*newZombie(const std::string& name);
void	randomChump(const std::string& name);

#endif
