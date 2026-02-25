/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.Classe.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:19:22 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 14:47:37 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_CLASSE_HPP
# define AANIMAL_CLASSE_HPP

#include <string>
class AAnimal{
protected:
	std::string _type;

public:
	AAnimal();
	AAnimal(std::string _type);
	AAnimal(const AAnimal& copy);
	AAnimal& operator=(const AAnimal& copy);
	virtual ~AAnimal();

	virtual void	makeSound() const = 0;
	std::string		getType() const;
};

#endif