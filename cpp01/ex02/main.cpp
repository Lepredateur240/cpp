/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 11:02:29 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:05:59 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void){
	std::string string = "HI THIS IS BRAIN";

	std::string	*stringPTR = &string;
	std::string	&stringRef = string;

	std::cout << &string << " / " << &stringPTR << " / " << &stringRef << std::endl;
	std::cout << string << " / " << *stringPTR << " / " << stringRef << std::endl;
}