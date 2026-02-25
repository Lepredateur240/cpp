/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.Classe.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:20:40 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:29:32 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASSE_HPP
# define BRAIN_CLASSE_HPP

#include <string>

class Brain{
private:
	std::string	_ideas[100];

public:
	Brain();
	Brain(std::string _type);
	Brain(const Brain& copy);
	Brain& operator=(const Brain& copy);
	virtual ~Brain();
};

#endif