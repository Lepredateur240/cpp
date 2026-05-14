/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:27:27 by masenche          #+#    #+#             */
/*   Updated: 2026/05/05 15:00:16 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.Classe.hpp"
#include <cstdlib>

int	main(int ac, char **av){
	Harl harl;

	if (ac != 2)
		exit(1);
	
	harl.complain(av[1]);
	return (0);
}