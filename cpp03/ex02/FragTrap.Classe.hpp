/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.Classe.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 22:56:02 by masenche          #+#    #+#             */
/*   Updated: 2026/02/24 22:58:22 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASSE_HPP
# define FRAGTRAP_CLASSE_HPP

#include "ClapTrap.Classe.hpp"

class FragTrap : public ClapTrap {
private:
	

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& copy);
	FragTrap& operator=(const FragTrap& copy);
	~FragTrap();

	void highFivesGuys();
};


#endif