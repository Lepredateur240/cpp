/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 13:30:21 by masenche          #+#    #+#             */
/*   Updated: 2026/02/24 15:30:26 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.hpp"

void	print_error(const std::string &message){
	std::cerr << "Error: " << message << std::endl;
	exit(1);
}