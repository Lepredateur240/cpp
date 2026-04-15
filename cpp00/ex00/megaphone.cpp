/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:14:22 by masenche          #+#    #+#             */
/*   Updated: 2026/04/15 19:22:33 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>

int	main (int ac, char **av){
	if (ac > 1)
	{
		std::string	*str = new std::string[ac - 1];

		for (int i = 1; i < ac; i++)
		{
			str[i] = std::string(av[i]);
			for (int y = 0; str[i][y]; y++)
			{
				str[i][y] = toupper(str[i][y]);
			}
			std::cout << str[i];
			if (i < ac - 1)
				std::cout << " ";
		}
		delete[] str;
		std::cout << std::endl;
	}
	else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
}
