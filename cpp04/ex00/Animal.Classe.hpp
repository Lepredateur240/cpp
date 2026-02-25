/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.Classe.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:19:22 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:25:03 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASSE_HPP
# define ANIMAL_CLASSE_HPP

#include <string>

class Animal{
protected:
	std::string	_type;

public:
	Animal();
	Animal(std::string _type);
	Animal(const Animal& copy);
	Animal& operator=(const Animal& copy);
	virtual ~Animal();

	virtual void	makeSound() const;
	std::string		getType() const;
};

#endif