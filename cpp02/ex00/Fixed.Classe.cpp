/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Classe.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:17:33 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:16:19 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.Classe.hpp"

Fixed::Fixed() : _fixedPointValue(0){
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

Fixed &Fixed::operator=(const Fixed &copy){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_fixedPointValue = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw){
	this->_fixedPointValue = raw;
}
