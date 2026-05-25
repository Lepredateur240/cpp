/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:18:29 by masenche          #+#    #+#             */
/*   Updated: 2026/05/22 14:40:00 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>

Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(N) {
	_numbers.reserve(N);
}

Span::Span(const Span& other) : _N(other._N), _numbers(other._numbers) {}

Span& Span::operator=(const Span& other) {
	if (this != &other) {
		_N = other._N;
		_numbers = other._numbers;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int n) {
	if (_numbers.size() >= _N)
		throw FullSpanException();
	_numbers.push_back(n);
}

unsigned int Span::longestSpan() const {
	if (_numbers.size() < 2)
		throw NoSpanException();
	
	int min = *std::min_element(_numbers.begin(), _numbers.end());
	int max = *std::max_element(_numbers.begin(), _numbers.end());
	
	return static_cast<unsigned int>(max - min);
}

unsigned int Span::shortestSpan() const {
	if (_numbers.size() < 2)
		throw NoSpanException();
	
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	
	unsigned int min_span = UINT_MAX;
	for (size_t i = 1; i < sorted.size(); ++i) {
		unsigned int span = static_cast<unsigned int>(sorted[i] - sorted[i - 1]);
		if (span < min_span)
			min_span = span;
	}
	
	return min_span;
}
