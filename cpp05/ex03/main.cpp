/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:40:44 by masenche          #+#    #+#             */
/*   Updated: 2026/05/15 15:45:00 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
    std::srand(std::time(0));

    std::cout << "--- TEST 1: Intern creating Robotomy ---" << std::endl;
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        if (rrf)
        {
            Bureaucrat b1("B1", 1);
            b1.signForm(*rrf);
            b1.executeForm(*rrf);
            delete rrf;
        }
    }

    std::cout << "\n--- TEST 2: Intern creating Shrubbery, Pardon and Unknown ---" << std::endl;
    {
        Intern intern;
        AForm* f1 = intern.makeForm("shrubbery creation", "Garden");
        AForm* f2 = intern.makeForm("presidential pardon", "Prisoner");
        AForm* f3 = intern.makeForm("unknown form", "Nobody");

        if (f1) {
            Bureaucrat b1("B1", 1);
            b1.signForm(*f1);
            b1.executeForm(*f1);
            delete f1;
        }
        if (f2) {
            Bureaucrat b1("B1", 1);
            b1.signForm(*f2);
            b1.executeForm(*f2);
            delete f2;
        }
        if (f3) {
            delete f3;
        }
    }

    std::cout << "\n--- TEST 3: ShrubberyCreationForm (Manual) ---" << std::endl;
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

    std::cout << "\n--- TEST 4: RobotomyRequestForm (Manual) ---" << std::endl;
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

    std::cout << "\n--- TEST 5: PresidentialPardonForm (Manual) ---" << std::endl;
    try {
        Bureaucrat b1("B1", 25);
        Bureaucrat b2("B2", 5);
        PresidentialPardonForm f3("Criminal");

        b1.signForm(f3);
        b2.executeForm(f3);
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n--- TEST 6: Failures and Exceptions ---" << std::endl;
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
