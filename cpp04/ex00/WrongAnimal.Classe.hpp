/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.Classe.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:14:07 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:28:03 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASSE_HPP
# define WRONGANIMAL_CLASSE_HPP

#include <string>

class WrongAnimal{
protected:
	std::string _type;

public:
	WrongAnimal();
	WrongAnimal(std::string _type);
	WrongAnimal(const WrongAnimal& copy);
	WrongAnimal& operator=(const WrongAnimal& copy);
	virtual ~WrongAnimal();

	void		makeSound() const;
	std::string	getType() const;
};

#endif