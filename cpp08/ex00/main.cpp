/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 13:38:17 by masenche          #+#    #+#             */
/*   Updated: 2026/05/22 14:08:26 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    // Test 1 : Avec un vector
    std::vector<int> vecteur;
    vecteur.push_back(10);
    vecteur.push_back(20);
    vecteur.push_back(30);

    std::cout << "--- Test avec std::vector ---" << std::endl;
    try {
        std::vector<int>::iterator it = easyfind(vecteur, 20);
        std::cout << "Succès : Trouvé " << *it << std::endl;
        
        // Provoque une erreur intentionnelle
        easyfind(vecteur, 99); 
    } catch (const std::exception& e) {
        std::cerr << "Erreur (vecteur) : " << e.what() << std::endl;
    }

    // Test 2 : Avec une list
    std::list<int> liste;
    liste.push_back(1);
    liste.push_back(42);
    liste.push_back(100);

    std::cout << "\n--- Test avec std::list ---" << std::endl;
    try {
        std::list<int>::iterator it2 = easyfind(liste, 42);
        std::cout << "Succès : Trouvé " << *it2 << std::endl;
        
        // Provoque une erreur intentionnelle
        easyfind(liste, 5);
    } catch (const std::exception& e) {
        std::cerr << "Erreur (liste) : " << e.what() << std::endl;
    }

    return 0;
}