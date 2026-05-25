/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 19:16:01 by masenche          #+#    #+#             */
/*   Updated: 2026/05/22 13:52:26 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>

template <typename T>
class Array{
private:
	T*          _elements;
	unsigned int _size;

public:
	Array();
	Array(unsigned int n);
	Array(const Array& other);
	Array& operator=(const Array& rhs);
	T&     operator[](unsigned int index);
	const T& operator[](unsigned int index) const;
	~Array();

	unsigned int size() const;
	class OutOfBoundsException : public std::exception {
		virtual const char* what() const throw() { return "Index out of bounds"; }
	};
};

#include "Array.tpp"

#endif
