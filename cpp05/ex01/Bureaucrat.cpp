/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:41:21 by masenche          #+#    #+#             */
/*   Updated: 2026/05/15 15:46:59 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <ostream>

Bureaucrat::Bureaucrat() : _name("default"), _grade(150){
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName()), _grade(copy.getGrade()){
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy){
	if (this != &copy)
		this->_grade = copy._grade;
	return *this;
}

Bureaucrat::~Bureaucrat(){
}

int Bureaucrat::getGrade(void) const{
	return this->_grade;
}

const std::string& Bureaucrat::getName(void) const{
	return this->_name;
}

void	Bureaucrat::downGrade(void){
	int temp = this->getGrade();
	temp++; 
	if (temp > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = temp;
}

void	Bureaucrat::upGrade(void){
	int temp = this->getGrade();
	temp--;
	if (temp < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = temp;
}

void	Bureaucrat::signForm(Form &form){
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

std::ostream	&operator<<(std::ostream &out,const Bureaucrat &other){
	out << other.getName() << ", bureaucrat grade " << other.getGrade() << "." << std::endl;
	return out;
}