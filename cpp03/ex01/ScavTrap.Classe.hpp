/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.Classe.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 22:34:45 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:22:32 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASSE_HPP
# define SCAVTRAP_CLASSE_HPP

#include "ClapTrap.Classe.hpp"

class ScavTrap : public ClapTrap{
private:

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& copy);
	ScavTrap& operator=(const ScavTrap& copy);
	~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate();
};

#endif