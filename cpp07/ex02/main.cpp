/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:25:35 by masenche          #+#    #+#             */
/*   Updated: 2026/05/22 13:52:36 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main() {
	std::cout << "--- Empty Array ---" << std::endl;
	Array<int> empty;
	std::cout << "Size: " << empty.size() << std::endl;

	std::cout << "\n--- Array of 5 ints ---" << std::endl;
	Array<int> arr(5);
	std::cout << "Size: " << arr.size() << std::endl;
	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	std::cout << "\n--- Modifying and Deep Copy ---" << std::endl;
	for (unsigned int i = 0; i < arr.size(); i++)
		arr[i] = i * 10;
	
	Array<int> copy(arr);
	copy[0] = 42;
	std::cout << "Original[0]: " << arr[0] << " (should be 0)" << std::endl;
	std::cout << "Copy[0]:     " << copy[0] << " (should be 42)" << std::endl;

	std::cout << "\n--- String Array ---" << std::endl;
	Array<std::string> s_arr(3);
	s_arr[0] = "Hello";
	s_arr[1] = "World";
	s_arr[2] = "!";
	for (unsigned int i = 0; i < s_arr.size(); i++)
		std::cout << s_arr[i] << " ";
	std::cout << std::endl;

	std::cout << "\n--- Exception Testing ---" << std::endl;
	try {
		std::cout << arr[10] << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}
