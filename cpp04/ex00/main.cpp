/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:15:32 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:26:29 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.Classe.hpp"
#include "Animal.Classe.hpp"
#include "Cat.Classe.hpp"
#include <iostream>

int main() {
    std::cout << "--- 1. TESTS DE CONSTRUCTION ET POLYMORPHISME ---" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl << "--- 2. VERIFICATION DES TYPES ---" << std::endl;
    std::cout << "Pointeur J (Dog) type : " << j->getType() << std::endl;
    std::cout << "Pointeur I (Cat) type : " << i->getType() << std::endl;

    std::cout << std::endl << "--- 3. TEST DES SONS (POLYMORPHISME) ---" << std::endl;
    std::cout << "i (Chat) dit : "; i->makeSound();
    std::cout << "j (Chien) dit : "; j->makeSound();
    std::cout << "meta (Animal) dit : "; meta->makeSound();

    std::cout << std::endl << "--- 4. TESTS DE LA FORME CANONIQUE (COPIE) ---" << std::endl;
    Dog originalDog;

    std::cout << "Création d'une copie de Dog..." << std::endl;
    Dog copyDog(originalDog);

    std::cout << "Type de la copie : " << copyDog.getType() << std::endl;
    copyDog.makeSound();

    std::cout << std::endl << "--- 5. TEST DE DESTRUCTION (MÉMOIRE) ---" << std::endl;
    delete meta;
    delete j;
    delete i;

    std::cout << std::endl << "--- 6. TEST DE PORTÉE (STACK) ---" << std::endl;
    {
        std::cout << "Entrée dans un bloc local..." << std::endl;
        Dog stackDog;

    }
    std::cout << "Sortie du bloc local." << std::endl;

    return 0;
}