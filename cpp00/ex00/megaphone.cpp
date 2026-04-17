/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:14:22 by masenche          #+#    #+#             */
/*   Updated: 2026/04/17 15:48:25 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>

int	main (int ac, char **av){
	if (ac > 1)
	{
		std::string *str = new std::string[ac - 1];
		for (int i = 0; i < ac - 1; i++)
		{
			str[i] = av[i + 1];
			for (int y = 0; str[i][y]; y++)
					str[i][y] = toupper(str[i][y]);
			std::cout << str[i];
			if (i + 1 < ac - 1)
				std::cout << " ";
		}
		delete[] str;
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
