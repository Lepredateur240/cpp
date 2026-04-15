/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.Classe.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:16:24 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:32:30 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASSE_HPP
# define CAT_CLASSE_HPP

#include "AAnimal.Classe.hpp"
#include "Brain.Classe.hpp"

class Cat : public AAnimal{
private:
	Brain	*_ideas;

public:
	Cat();
	Cat(std::string _type);
	Cat(const Cat& copy);
	Cat& operator=(const Cat& copy);
	virtual ~Cat();

	void	makeSound() const;
};

#endif