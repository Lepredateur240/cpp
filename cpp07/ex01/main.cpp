/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:25:35 by masenche          #+#    #+#             */
/*   Updated: 2026/05/22 13:52:55 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template<typename T>
void print(const T& x) {
	std::cout << x << " ";
}

void increment(int& n) {
	n++;
}

int main() {
	std::cout << "--- Int Array ---" << std::endl;
	int arr[] = {1, 2, 3, 4, 5};
	::iter(arr, 5, print<int>);
	std::cout << std::endl;

	std::cout << "--- Increment and Print ---" << std::endl;
	::iter(arr, 5, increment);
	::iter(arr, 5, print<int>);
	std::cout << std::endl;

	std::cout << "--- Const Int Array ---" << std::endl;
	const int c_arr[] = {10, 20, 30};
	::iter(c_arr, 3, print<int>);
	std::cout << std::endl;

	std::cout << "--- String Array ---" << std::endl;
	std::string s_arr[] = {"Hello", "World", "!"};
	::iter(s_arr, 3, print<std::string>);
	std::cout << std::endl;

	return 0;
}