/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 15:52:10 by masenche          #+#    #+#             */
/*   Updated: 2026/05/15 16:12:37 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150){
}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &copy) : _name(copy._name), _isSigned(copy._isSigned), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute){
	*this = copy;
}

Form& Form::operator=(const Form &copy){
	if (this != &copy)
		this->_isSigned = copy._isSigned;
	return *this;
}

Form::~Form(){
}

const std::string& Form::getName(void) const{
	return this->_name;
}

bool Form::getIsSigned(void) const{
	return this->_isSigned;
}

int Form::getGradeToSign(void) const{
	return this->_gradeToSign;
}

int Form::getGradeToExecute(void) const{
	return this->_gradeToExecute;
}

void	Form::beSigned(const Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

std::ostream	&operator<<(std::ostream &out,const Form &other){
	out << "Form " << other.getName() << ", grade to sign: " << other.getGradeToSign() << ", grade to execute: " << other.getGradeToExecute() << ", signed: " << (other.getIsSigned() ? "yes" : "no") << std::endl;
	return out;
}