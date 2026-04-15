/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:27:27 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:15:29 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.Classe.hpp"

int	main(void){
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	return (0);
}