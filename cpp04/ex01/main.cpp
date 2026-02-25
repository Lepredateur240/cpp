/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:15:32 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:30:58 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.Classe.hpp"
#include "Dog.Classe.hpp"
#include "Cat.Classe.hpp"
#include <iostream>

int main() {
	const int arraySize = 4;
	Animal* animals[arraySize];

	std::cout << "--- 1. REMPLISSAGE DU TABLEAU (50% DOGS, 50% CATS) ---" << std::endl;
	for (int i = 0; i < arraySize; i++) {
		if (i < arraySize / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << "Animal[" << i << "] créé." << std::endl << std::endl;
	}
	std::cout << "--- 2. TEST RAPIDE DES SONS ---" << std::endl;
	for (int i = 0; i < arraySize; i++) {
		std::cout << "Animal " << i << " (" << animals[i]->getType() << ") dit : ";
		animals[i]->makeSound();
	}
	std::cout << std::endl << "--- 3. DESTRUCTION MASSIVE ---" << std::endl;
	for (int i = 0; i < arraySize; i++) {
		std::cout << "Suppression de l'animal " << i << " :" << std::endl;
		delete animals[i]; 
		std::cout << "-----------------------" << std::endl;
	}
	return (0);
}