/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:39:30 by masenche          #+#    #+#             */
/*   Updated: 2026/05/18 17:16:30 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
	
}
ScalarConverter::ScalarConverter(const ScalarConverter& other) {
	(void)other;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	(void)other;
	return *this;
}
ScalarConverter::~ScalarConverter() {
	
}

static void displayChar(double d) {
    std::cout << "char: ";
    if (d < 0 || d > 127 || d != d)
        std::cout << "impossible" << std::endl;
    else if (!std::isprint(static_cast<char>(d)))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
}

static void displayInt(double d) {
    std::cout << "int: ";
    if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max() || d != d || std::isinf(d))
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(d) << std::endl;
}

static void displayFloat(double d) {
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
}

static void displayDouble(double d) {
    std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

static void displaySpecial(const std::string& literal) {
	if (literal == "nan" || literal == "nanf") {
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;
	} else if (literal == "+inf" || literal == "+inff" || literal == "inf" || literal == "inff") {
		std::cout << "char: impossible\nint: impossible\nfloat: inff\ndouble: inf" << std::endl;
	} else if (literal == "-inf" || literal == "-inff") {
		std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf" << std::endl;
	}
}

void ScalarConverter::convert(const std::string& literal) {
    double value;
    char* endPtr;

	if (literal == "nan" || literal == "nanf" || literal == "+inf" || literal == "+inff" || literal == "inf" || literal == "inff" || literal == "-inf" || literal == "-inff") {
		displaySpecial(literal);
		return;
	}
    if (literal.length() == 1 && !std::isdigit(literal[0])) {
        value = static_cast<double>(literal[0]);
    } 
    else {
        value = std::strtod(literal.c_str(), &endPtr);
        if (*endPtr == 'f' && *(endPtr + 1) == '\0') {
        } else if (*endPtr != '\0') {
            std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
            return;
        }
    }
    displayChar(value);
    displayInt(value);
    displayFloat(value);
    displayDouble(value);
}