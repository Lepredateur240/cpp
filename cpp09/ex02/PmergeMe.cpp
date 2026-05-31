/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:14:15 by masenche          #+#    #+#             */
/*   Updated: 2026/05/31 19:49:07 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) {
	*this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
	if (this != &other) {
		this->_vector = other._vector;
		this->_deque = other._deque;
	}
	return *this;
}

PmergeMe::~PmergeMe() {}

std::vector<int> PmergeMe::genererJacobsthal(int maxElements) {
    std::vector<int> jacobSeq;

    jacobSeq.push_back(1); 
    jacobSeq.push_back(3); 
    
    int index = 2;
    while (true) {
        int nextValue = jacobSeq[index - 1] + 2 * jacobSeq[index - 2];
        jacobSeq.push_back(nextValue);
        if (nextValue > maxElements) 
            break;
        index++;
    }
    return jacobSeq;
}

void PmergeMe::execute(char **av) {
	for (int i = 1; av[i]; i++) {
		char *endptr;
		long val = std::strtol(av[i], &endptr, 10);
		if (*endptr != '\0' || val < 0 || val > 2147483647)
			throw std::runtime_error("Error: Invalid positive integer");
		_vector.push_back(static_cast<int>(val));
		_deque.push_back(static_cast<int>(val));
	}

	std::cout << "Before: ";
	for (size_t i = 0; i < _vector.size(); i++)
		std::cout << _vector[i] << (i == _vector.size() - 1 ? "" : " ");
	std::cout << std::endl;

	clock_t startV = clock();
	sortContainer(_vector);
	clock_t endV = clock();

	clock_t startD = clock();
	sortContainer(_deque);
	clock_t endD = clock();

	std::cout << "After:  ";
	for (size_t i = 0; i < _vector.size(); i++)
		std::cout << _vector[i] << (i == _vector.size() - 1 ? "" : " ");
	std::cout << std::endl;

	double timeV = static_cast<double>(endV - startV) / CLOCKS_PER_SEC * 1e6;
	std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector : " << std::fixed << std::setprecision(5) << timeV << " us" << std::endl;

	double timeD = static_cast<double>(endD - startD) / CLOCKS_PER_SEC * 1e6;
	std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque  : " << std::fixed << std::setprecision(5) << timeD << " us" << std::endl;
}
