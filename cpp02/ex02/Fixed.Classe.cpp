/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Classe.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:17:33 by masenche          #+#    #+#             */
/*   Updated: 2026/02/24 18:11:10 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.Classe.hpp"

Fixed::Fixed() : _fixedPointValue(0){
}

Fixed::Fixed(const int fixedPointValue){
	this->_fixedPointValue = fixedPointValue << _fractionalBits;
}

Fixed::Fixed(const float fixedPointValueFloat){
	this->_fixedPointValue = roundf(fixedPointValueFloat * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &copy){
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy){
	if (this != &copy)
		this->_fixedPointValue = copy._fixedPointValue;
	return (*this);
}

Fixed::~Fixed(){
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

int	Fixed::getRawBits(void) const{
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw){
	this->_fixedPointValue = raw;
}

bool Fixed::operator>(const Fixed &other) const{
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const{
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const{
	return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const{
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const{
	return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const{
	return (this->getRawBits() != other.getRawBits());
}

Fixed Fixed::operator+(const Fixed &other) const{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const{
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed &Fixed::operator++(){
	this->_fixedPointValue++;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed temp(*this);
	this->_fixedPointValue++;
	return (temp);
}

Fixed &Fixed::operator--(){
	this->_fixedPointValue--;
	return (*this);
}

Fixed Fixed::operator--(int){
	Fixed temp(*this);
	this->_fixedPointValue--;
	return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
	return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
	return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
	return (a > b ? a : b);
}