/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:15:32 by masenche          #+#    #+#             */
/*   Updated: 2026/05/06 20:25:35 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.Classe.hpp"
#include "Animal.Classe.hpp"
#include "Cat.Classe.hpp"
#include <iostream>
#include "WrongAnimal.Classe.hpp"
#include "WrongCat.Classe.hpp"

int main()
{
    std::cout << "\033[34m=== 1. BASIC TESTS (Subject) ===\033[0m" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\nTypes of created animals:" << std::endl;
    std::cout << "j is a: " << j->getType() << std::endl;
    std::cout << "i is a: " << i->getType() << std::endl;
    
    std::cout << "\nAnimal sounds (Polymorphism with virtual):" << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "\nDestruction:" << std::endl;
    delete meta;
    delete j;
    delete i;

    std::cout << "\n\033[31m=== 2. WRONG ANIMAL AND WRONG CAT TESTS ===\033[0m" << std::endl;
    std::cout << "Demonstrates the importance of the 'virtual' keyword\n" << std::endl;
    
    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* wrong_cat = new WrongCat();

    std::cout << "\nType of wrong_cat: " << wrong_cat->getType() << std::endl;
    
    std::cout << "\nWrongAnimal sounds (Without virtual):" << std::endl;
    wrong_cat->makeSound(); 
    wrong_meta->makeSound();

    std::cout << "\nDestruction (Watch out for leaks if the destructor is not virtual!):" << std::endl;
    delete wrong_meta;
    delete wrong_cat;

    std::cout << "\n\033[32m=== 3. CANONICAL FORM TESTS (Copy and Assignment) ===\033[0m" << std::endl;
    {
        std::cout << "--> Creation of an original Dog:" << std::endl;
        Dog originalDog;
        
        std::cout << "\n--> Copy constructor test:" << std::endl;
        Dog copyDog(originalDog);
        std::cout << "Copy type: " << copyDog.getType() << std::endl;
        
        std::cout << "\n--> Assignment operator test:" << std::endl;
        Dog assignedDog;
        assignedDog = originalDog;
        std::cout << "Assigned animal type: " << assignedDog.getType() << std::endl;
        std::cout << "\n--> Destruction of local objects:" << std::endl;
    }

    std::cout << "\n\033[32m=== END OF TESTS ===\033[0m" << std::endl;

    return 0;
}
