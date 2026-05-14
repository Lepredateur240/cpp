/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 13:30:21 by masenche          #+#    #+#             */
/*   Updated: 2026/05/05 14:32:40 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.hpp"
#include <cstdlib>


void	print_error(const std::string &message){
	std::cerr << "Error: " << message << std::endl;
	exit(1);
}