/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:17:59 by masenche          #+#    #+#             */
/*   Updated: 2026/05/22 14:45:00 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int main() {
	std::cout << "--- Test du sujet ---" << std::endl;
	try {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n--- Test avec 10 000 nombres (plage d'itérateurs) ---" << std::endl;
	try {
		Span sp2 = Span(10000);
		std::vector<int> random_numbers;
		std::srand(std::time(0));
		for (int i = 0; i < 10000; ++i)
			random_numbers.push_back(std::rand());
		
		sp2.addNumber(random_numbers.begin(), random_numbers.end());
		std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n--- Test d'exceptions ---" << std::endl;
	try {
		Span sp3 = Span(1);
		sp3.addNumber(42);
		sp3.shortestSpan();
	} catch (const std::exception& e) {
		std::cout << "Attendu (NoSpan) : " << e.what() << std::endl;
	}

	try {
		Span sp4 = Span(1);
		sp4.addNumber(42);
		sp4.addNumber(21);
	} catch (const std::exception& e) {
		std::cout << "Attendu (FullSpan) : " << e.what() << std::endl;
	}

	return 0;
}
