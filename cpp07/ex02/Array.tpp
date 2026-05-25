/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 19:23:17 by masenche          #+#    #+#             */
/*   Updated: 2026/05/22 13:52:32 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array() : _elements(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n) {
	_elements = new T[n]();
}

template <typename T>
Array<T>::Array(const Array& other) : _elements(NULL), _size(0) {
	*this = other;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& rhs) {
	if (this != &rhs) {
		delete[] _elements;
		_size = rhs._size;
		if (_size > 0) {
			_elements = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_elements[i] = rhs._elements[i];
		} else {
			_elements = NULL;
		}
	}
	return *this;
}

template <typename T>
Array<T>::~Array() {
	delete[] _elements;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= _size)
		throw OutOfBoundsException();
	return _elements[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
	if (index >= _size)
		throw OutOfBoundsException();
	return _elements[index];
}

template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}

#endif
