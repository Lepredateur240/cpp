/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainWrong.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:08:28 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:27:17 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.Classe.hpp"
#include "WrongCat.Classe.hpp"
#include <iostream>

int main() {
    std::cout << "---------- TESTS DES CLASSES 'WRONG' ----------" << std::endl;
    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* wrong_cat = new WrongCat();

    std::cout << std::endl << "Test de type : " << wrong_cat->getType() << std::endl;
    std::cout << "Appel de makeSound() via pointeur WrongAnimal* :" << std::endl;
    wrong_cat->makeSound();
    std::cout << std::endl << "Appel de makeSound() directement depuis un objet WrongCat :" << std::endl;
    WrongCat real_wrong_cat;

    real_wrong_cat.makeSound();
    std::cout << std::endl << "---------- DESTRUCTION (DANGER) ----------" << std::endl;
    delete wrong_meta;
    delete wrong_cat;
    std::cout << std::endl << "---------- TESTS COMPLÉMENTAIRES (TABLEAU) ----------" << std::endl;
    WrongAnimal* animal_hospital[2];

    animal_hospital[0] = new WrongAnimal();
    animal_hospital[1] = new WrongCat();
    for (int i = 0; i < 2; i++) {
        std::cout << "Animal index " << i << " : ";
        animal_hospital[i]->makeSound();
    }
    for (int i = 0; i < 2; i++) {
        delete animal_hospital[i];
    }
    return (0);
}