/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.Classe.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:16:34 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:25:53 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASSE_HPP
# define DOG_CLASSE_HPP

#include "Animal.Classe.hpp"

class Dog : public Animal{
private:

public:
	Dog();
	Dog(std::string _type);
	Dog(const Dog& copy);
	Dog& operator=(const Dog& copy);
	virtual ~Dog();

	void	makeSound() const;
};

#endif