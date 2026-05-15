/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:40:44 by masenche          #+#    #+#             */
/*   Updated: 2026/05/15 15:23:05 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
    std::cout << "--- TEST 1: Bureaucrate valide et UpGrade ---" << std::endl;
    try {
        Bureaucrat a("Alice", 2);
        std::cout << a;
        a.upGrade(); // Devrait passer a 1
        std::cout << "Apres 1er upGrade : " << a;
        
        std::cout << "Tentative d'un upGrade de trop..." << std::endl;
        a.upGrade(); // Devrait lancer GradeTooHighException (car 1 est le max)
        std::cout << "Cette ligne ne doit pas s'afficher !" << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Erreur attrapee : " << e.what() << std::endl;
    }

    std::cout << "\n--- TEST 5: Form Sign ---" << std::endl;
    try {
        Bureaucrat boss("Boss", 1);
        Bureaucrat intern("Intern", 150);
        Form f1("Formulaire A", 50, 50);
        Form f2("Formulaire B", 1, 1);

        std::cout << f1;
        std::cout << f2;

        std::cout << "\nL'interne essaie de signer Formulaire A (requis: 50):" << std::endl;
        intern.signForm(f1);

        std::cout << "\nLe boss essaie de signer Formulaire A (requis: 50):" << std::endl;
        boss.signForm(f1);
        std::cout << "Etat de f1 apres signature : " << (f1.getIsSigned() ? "Signe" : "Non signe") << std::endl;

        std::cout << "\nLe boss essaie de signer Formulaire B (requis: 1):" << std::endl;
        boss.signForm(f2);
        std::cout << "Etat de f2 apres signature : " << (f2.getIsSigned() ? "Signe" : "Non signe") << std::endl;

    } catch (std::exception &e) {
        std::cerr << "Exception imprevue : " << e.what() << std::endl;
    }

    return 0;
}
