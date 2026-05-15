/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 15:35:00 by masenche          #+#    #+#             */
/*   Updated: 2026/05/15 15:35:00 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern(const Intern &other)
{
    (void)other;
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return *this;
}

Intern::~Intern() {}

static AForm *makeShrubbery(std::string target)
{
    return new ShrubberyCreationForm(target);
}

static AForm *makeRobotomy(std::string target)
{
    return new RobotomyRequestForm(target);
}

static AForm *makePresidential(std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    std::string names[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    AForm *(*forms[])(std::string target) = {
        &makeShrubbery,
        &makeRobotomy,
        &makePresidential
    };

    for (int i = 0; i < 3; i++)
    {
        if (formName == names[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return forms[i](target);
        }
    }

    std::cerr << "Error: Intern cannot create form " << formName << " because it does not exist." << std::endl;
    return NULL;
}
