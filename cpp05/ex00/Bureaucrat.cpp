/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:41:21 by masenche          #+#    #+#             */
/*   Updated: 2026/05/14 19:27:14 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <ostream>

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name){
	if (grade < 1)
	{
		std::cout << "Bureaucrat::GradeTooLowException" << std::endl;
		return;
	}
	if (grade > 150)
	{
		std::cout << "Bureaucrat::GradeTooHighException" << std::endl;
		return;
	}
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat(){

}

std::ostream	&operator<<(std::ostream &out,const Bureaucrat &other){
	out << other.getName() << ", bureaucrat grade " << other.getGrade() << std::endl;
	return out;
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
	std::cout << temp << std::endl; 
	try{
		if (temp > 150)
			throw std::string("Bureaucrat::GradeTooLowException");
		this->_grade = temp;
	}
	catch(std::string &e)
	{
		std::cerr << e << std::endl;
	}
}

void	Bureaucrat::upGrade(void){
	int temp = this->getGrade();
	temp--;
	try{
		if (temp < 1)
			throw std::string("Bureaucrat::GradeTooHighException");
		this->_grade = temp;
	}
	catch(std::string &e)
	{
		std::cerr << e << std::endl;
	}
}