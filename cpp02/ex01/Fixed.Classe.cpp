/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Classe.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:17:33 by masenche          #+#    #+#             */
/*   Updated: 2026/02/24 18:11:21 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.Classe.hpp"

Fixed::Fixed() : _fixedPointValue(0){
	std::cout << "Default constructor called" << std::endl ;
}

Fixed::Fixed(const int fixedPointValue){
	std::cout << "Int constructor called" << std::endl ;
	this->_fixedPointValue = fixedPointValue << _fractionalBits;
}

Fixed::Fixed(const float fixedPointValueFloat){
	std::cout << "Float constructor called" << std::endl ;
	this->_fixedPointValue = roundf(fixedPointValueFloat * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &copy){
	std::cout << "Copy constructor called" << std::endl ;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy){
	std::cout << "Copy assignment operator called" << std::endl ;
	if (this != &copy)
		this->_fixedPointValue = copy._fixedPointValue;
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl ;
}

float	Fixed::toFloat(void) const{
	return ((float)this->_fixedPointValue / (1 << _fractionalBits));
}

int	Fixed::toInt(void) const{
	return (this->_fixedPointValue >> _fractionalBits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs){
	o << rhs.toFloat();
	return (o);
}