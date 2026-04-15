/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:42:36 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:43:02 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.Classe.hpp"
#include "Dog.Classe.hpp"
#include "Cat.Classe.hpp"
#include <iostream>

int main() {
	// const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog(); //
	const AAnimal* i = new Cat(); //

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	delete j;
	delete i;
	return (0);
}