/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:15:32 by masenche          #+#    #+#             */
/*   Updated: 2026/05/06 20:24:35 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.Classe.hpp"
#include "Dog.Classe.hpp"
#include "Cat.Classe.hpp"
#include <iostream>

int main()
{
    std::cout << "\033[34m=== 1. SUBJECT TEST: ARRAY OF ANIMALS ===\033[0m" << std::endl;
    const int arraySize = 6;
    Animal* animals[arraySize];

    std::cout << "\n--> Filling the array (50% Dogs, 50% Cats):" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        if (i < arraySize / 2) {
            std::cout << "Creating Dog " << i << ":" << std::endl;
            animals[i] = new Dog();
        } else {
            std::cout << "Creating Cat " << i << ":" << std::endl;
            animals[i] = new Cat();
        }
    }

    std::cout << "\n--> Checking sounds:" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        animals[i]->makeSound();
    }

    std::cout << "\n--> Destroying the array (Checking destructors):" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        delete animals[i];
    }

    std::cout << "\n\033[32m=== 2. DEEP COPY TESTS ===\033[0m" << std::endl;
    std::cout << "--> Testing Dogs:" << std::endl;
    {
        Dog basicDog;
        Dog tmpDog = basicDog;
        std::cout << "If this message appears without a crash, the Dog copy is deep!" << std::endl;
    }

    std::cout << "\n--> Testing Cats (Assignment):" << std::endl;
    {
        Cat catOne;
        Cat catTwo;
        
        catTwo = catOne;
    }
    std::cout << "Successful destruction without double-free: the Cat copy is deep!" << std::endl;

    return 0;
}