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
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
    std::srand(std::time(0));

    std::cout << "--- TEST 1: ShrubberyCreationForm ---" << std::endl;
    try {
        Bureaucrat b1("B1", 145);
        Bureaucrat b2("B2", 137);
        ShrubberyCreationForm f1("home");

        std::cout << f1 << std::endl;
        b1.signForm(f1);
        std::cout << f1 << std::endl;
        b2.executeForm(f1);
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n--- TEST 2: RobotomyRequestForm ---" << std::endl;
    try {
        Bureaucrat b1("B1", 72);
        Bureaucrat b2("B2", 45);
        RobotomyRequestForm f2("Target1");

        b1.signForm(f2);
        b2.executeForm(f2);
        b2.executeForm(f2);
        b2.executeForm(f2);
        b2.executeForm(f2);
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n--- TEST 3: PresidentialPardonForm ---" << std::endl;
    try {
        Bureaucrat b1("B1", 25);
        Bureaucrat b2("B2", 5);
        PresidentialPardonForm f3("Criminal");

        b1.signForm(f3);
        b2.executeForm(f3);
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n--- TEST 4: Failures ---" << std::endl;
    try {
        Bureaucrat lowGrade("LowGrade", 150);
        PresidentialPardonForm f4("Unlucky");

        lowGrade.signForm(f4);
        lowGrade.executeForm(f4);
        
        Bureaucrat midGrade("MidGrade", 20);
        midGrade.signForm(f4);
        midGrade.executeForm(f4); // Should fail execution
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
