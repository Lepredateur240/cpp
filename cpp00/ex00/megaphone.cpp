/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:14:22 by masenche          #+#    #+#             */
/*   Updated: 2026/02/24 15:33:57 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>

int	main (int ac, char **av){
	if (ac > 1)
	{
		size_t		count = 0;
		int		y = 0;
		char	*str;

		for (int i = 1; i < ac; i++) {
			for (int t = 0; av[i][t]; t++) {
				count++;
			}
			count++;
		}

		str = new char[count];
		for (int i = 1; i < ac; i++) {
			for (int t = 0; av[i][t]; t++) {
				str[y] = av[i][t];
				y++;
			}
			str[y] = ' ';
			y++;
		}

		for (y = 0; str[y]; y++) {
			if (str[y] >= 'a' && str[y] <= 'y')
				str[y] = str[y] -32;
		}

		std::cout << str << std::endl;
		delete str;
	}
	else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
}
