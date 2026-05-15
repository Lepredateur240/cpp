/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:30:10 by masenche          #+#    #+#             */
/*   Updated: 2026/05/15 16:30:10 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default") {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy), _target(copy._target) {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
    if (this != &copy) {
        AForm::operator=(copy);
        this->_target = copy._target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (this->getIsSigned() == false)
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();

    std::ofstream outfile((this->_target + "_shrubbery").c_str());
    if (outfile.is_open()) {
        outfile << "       _-_" << std::endl;
        outfile << "    /~~   ~~\\" << std::endl;
        outfile << " /~~         ~~\\" << std::endl;
        outfile << "{               }" << std::endl;
        outfile << " \\  _-     -_  /" << std::endl;
        outfile << "   ~  \\\\ //  ~" << std::endl;
        outfile << "_- -   | | _- _" << std::endl;
        outfile << "  _ -  | |   -_" << std::endl;
        outfile << "      // \\\\" << std::endl;
        outfile.close();
    }
}
