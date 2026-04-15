/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Classe.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:17:19 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:20:19 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASSE_HPP
# define FIXED_CLASSE_HPP

#include <iostream>
#include <cmath>

class Fixed{
private:
	int 				_fixedPointValue;
	static const int	_fractionalBits = 8;

public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed &operator=(const Fixed &copy);
	~Fixed();

	Fixed(const int fixedPointValue);
	Fixed(const float fixedPointValueFloat);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);

	float				toFloat(void) const;
	int					toInt(void) const;

	bool 				operator>(const Fixed &other) const;
	bool 				operator<(const Fixed &other) const;
	bool 				operator>=(const Fixed &other) const;
	bool 				operator<=(const Fixed &other) const;
	bool 				operator==(const Fixed &other) const;
	bool 				operator!=(const Fixed &other) const;

	Fixed 				operator+(const Fixed &other) const;
	Fixed 				operator-(const Fixed &other) const;
	Fixed 				operator*(const Fixed &other) const;
	Fixed 				operator/(const Fixed &other) const;

	Fixed 				&operator++();
	Fixed 				operator++(int);
	Fixed 				&operator--();
	Fixed 				operator--(int);

	static Fixed		&min(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static Fixed 		&max(Fixed &a, Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream 			&operator<<(std::ostream & o, Fixed const & rhs);

#endif