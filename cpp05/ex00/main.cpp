/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:40:44 by masenche          #+#    #+#             */
/*   Updated: 2026/05/14 19:26:10 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>

int main(void)
{
	Bureaucrat a("alb", 5);
	Bureaucrat tmp(a.getName(), a.getGrade());

	std::cout << "test overloading grade" << std::endl;
	Bureaucrat t0("test0", 0);
	Bureaucrat t01("test01", 151);

	std::cout << "test overloading operator '<<'" << std::endl;
	std::cout << a;
	std::cout << tmp << std::endl;
	
	std::cout << "up grade" << std::endl;
	Bureaucrat t("up", 2);
	std::cout << t;
	t.upGrade();
	std::cout << t;
	t.upGrade();
	std::cout << t << std::endl;

	std::cout << "down grade" << std::endl;
	Bureaucrat t1("down", 149);
	std::cout << t1;
	t1.downGrade();
	std::cout << t1;
	t1.downGrade();
	std::cout << t1;
}