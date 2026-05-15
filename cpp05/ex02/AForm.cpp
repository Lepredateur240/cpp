/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 15:52:10 by masenche          #+#    #+#             */
/*   Updated: 2026/05/15 16:12:37 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150){
}

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &copy) : _name(copy._name), _isSigned(copy._isSigned), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute){
	*this = copy;
}

AForm& AForm::operator=(const AForm &copy){
	if (this != &copy)
		this->_isSigned = copy._isSigned;
	return *this;
}

AForm::~AForm(){
}

const std::string& AForm::getName(void) const{
	return this->_name;
}

bool AForm::getIsSigned(void) const{
	return this->_isSigned;
}

int AForm::getGradeToSign(void) const{
	return this->_gradeToSign;
}

int AForm::getGradeToExecute(void) const{
	return this->_gradeToExecute;
}

void	AForm::beSigned(const Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	this->_isSigned = true;
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

const char* AForm::FormNotSignedException::what() const throw() {
    return "Form is not signed!";
}

std::ostream	&operator<<(std::ostream &out,const AForm &other){
	out << "Form " << other.getName() << ", grade to sign: " << other.getGradeToSign() << ", grade to execute: " << other.getGradeToExecute() << ", signed: " << (other.getIsSigned() ? "yes" : "no") << std::endl;
	return out;
}
