/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:23:30 by masenche          #+#    #+#             */
/*   Updated: 2026/05/25 15:57:48 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av){
	if (ac != 2)
	{
		std::cerr << "Error: Invalid argument : " << ac << std::endl;
		return 1;
	}
	RPN rpn;
	try
	{
		std::string pile = av[1];
		if (pile.empty())
		{
			std::cerr << ("empty argument") << std::endl ;
			return 1;
		}
		rpn.loadrpn(pile);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
		return 1;
	}
	
}