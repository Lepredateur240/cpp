/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 17:26:25 by masenche          #+#    #+#             */
/*   Updated: 2026/05/18 17:26:27 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp"

int main() {
	Data myData;
	myData.id = 42;
	myData.name = "Test Data";
	myData.value = 42.42f;

	std::cout << "Original pointer: " << &myData << std::endl;
	std::cout << "Data content: id=" << myData.id << ", name=" << myData.name << ", value=" << myData.value << std::endl;

	uintptr_t raw = Serializer::serialize(&myData);
	std::cout << "Serialized value: " << raw << std::endl;

	Data* ptr = Serializer::deserialize(raw);
	std::cout << "Deserialized pointer: " << ptr << std::endl;

	if (ptr == &myData) {
		std::cout << "SUCCESS: Pointers match!" << std::endl;
		std::cout << "Deserialized content: id=" << ptr->id << ", name=" << ptr->name << ", value=" << ptr->value << std::endl;
	} else {
		std::cout << "FAILURE: Pointers do not match!" << std::endl;
	}

	return 0;
}
