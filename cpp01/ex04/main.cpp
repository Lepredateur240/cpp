/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 14:26:38 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:14:20 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_sed.hpp"
#include "error.hpp"

int	main(int ac, char **av){
	if (ac != 4)
		print_error("Usage: " + std::string(av[0]) + " <filename> <s1> <s2>");
	std::string filename(av[1]);

	if (filename.empty())
		print_error("Error: filename cannot be empty");
	std::ifstream ifs(filename.c_str());

	if (!ifs.is_open())
		print_error("Error: cannot open file " + filename);
	std::string s1(av[2]);
	std::string s2(av[3]);

	if (s1.empty() || s2.empty())
		print_error("Error: s1 or s2 cannot be empty");
	ft_sed(filename, s1, s2, ifs);
	return (0);
}