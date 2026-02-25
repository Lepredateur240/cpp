/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.Classe.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:02:47 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 14:17:13 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASSE_HPP
# define WRONGCAT_CLASSE_HPP

#include "WrongAnimal.Classe.hpp"
class WrongCat : public WrongAnimal{
private:

public:
	WrongCat();
	WrongCat(std::string _type);
	WrongCat(const WrongCat& copy);
	WrongCat& operator=(const WrongCat& copy);
	virtual ~WrongCat();

	void	makeSound() const;

};

#endif