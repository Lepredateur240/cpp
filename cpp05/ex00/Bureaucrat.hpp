/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:41:42 by masenche          #+#    #+#             */
/*   Updated: 2026/05/14 19:01:29 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <ostream>
#include <string>

class	Bureaucrat{
private:
		const std::string	_name;
		int 				_grade;

public:
		Bureaucrat(const std::string _name, int grade);
		~Bureaucrat();
		friend std::ostream	&operator<<(std::ostream &out,const Bureaucrat &other);
		const std::string&	getName(void) const;
		int 				getGrade(void) const;
		void				upGrade(void);
		void				downGrade(void);
};


#endif