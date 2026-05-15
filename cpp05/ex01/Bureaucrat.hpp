/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:41:42 by masenche          #+#    #+#             */
/*   Updated: 2026/05/15 16:29:15 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <ostream>
#include <string>
#include <exception>

class	Form;

class	Bureaucrat{
private:
		const std::string	_name;
		int 				_grade;

public:
		Bureaucrat();
		Bureaucrat(const std::string _name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat& operator=(const Bureaucrat &copy);
		~Bureaucrat();
		const std::string&	getName(void) const;
		int 				getGrade(void) const;
		void				upGrade(void);
		void				downGrade(void);
		void				signForm(Form &form);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw();
		};
		
};

std::ostream	&operator<<(std::ostream &out,const Bureaucrat &other);

#endif