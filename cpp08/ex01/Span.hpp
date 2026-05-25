/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:18:14 by masenche          #+#    #+#             */
/*   Updated: 2026/05/22 14:35:00 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
# include <exception>
# include <iterator>

class Span
{
private:
	unsigned int		_N;
	std::vector<int>	_numbers;
	Span();

public:
	Span(unsigned int N);
	Span(const Span& other);
	Span& operator=(const Span& other);
	~Span();

	void	addNumber(int n);
	
	template <typename Iterator>
	void	addNumber(Iterator begin, Iterator end) {
		if (_numbers.size() + std::distance(begin, end) > _N)
			throw FullSpanException();
		_numbers.insert(_numbers.end(), begin, end);
	}

	unsigned int	shortestSpan() const;
	unsigned int	longestSpan() const;

	class FullSpanException : public std::exception {
		public: virtual const char* what() const throw() { return "Span is full"; }
	};

	class NoSpanException : public std::exception {
		public: virtual const char* what() const throw() { return "No span can be found (not enough numbers)"; }
	};
};

#endif
