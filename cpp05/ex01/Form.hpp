/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 15:51:58 by masenche          #+#    #+#             */
/*   Updated: 2026/05/15 16:16:41 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <ostream>
#include <string>
#include <exception>

class Bureaucrat;

class Form{
private:
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;

public:
	Form();
	Form(const std::string name, int gradeToSign, int gradeToExecute);
	Form(const Form &copy);
	Form& operator=(const Form &copy);
	~Form();
	const std::string&	getName(void) const;
	bool				getIsSigned(void) const;
	int					getGradeToSign(void) const;
	int					getGradeToExecute(void) const;
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
	void	beSigned(const Bureaucrat &bureaucrat);
};

std::ostream	&operator<<(std::ostream &out,const Form &other);

#endif