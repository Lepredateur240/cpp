/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:23:56 by masenche          #+#    #+#             */
/*   Updated: 2026/05/25 16:06:18 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){
}

RPN::RPN(const RPN& other){
	*this = other;
}

RPN& RPN::operator=(const RPN& other){
	if (this != &other)
		this->_pile = other._pile;
	return *this;
}

RPN::~RPN(){
}

bool RPN::isOperator(char c){
	return (c == '+' || c == '-' || c == '/' || c == '*');
}

int RPN::executeOperator(int a, int b, char o){
	if (o == '+')
		return (a + b);
	if (o == '-')
		return (a - b);
	if (o == '*')
		return (a * b);
	if (o == '/')
	{
		if (b == 0)
			throw std::runtime_error("Division by zero.");
		return (a / b);
	}
	return 0;
}

void RPN::loadrpn(std::string pile){
	for (size_t i = 0; i < pile.size(); i++)
	{
		if (isspace(pile[i]))
			continue;
		else if (isdigit(pile[i]))
			_pile.push(pile[i] - '0');
		else if (isOperator(pile[i]))
		{
			if (_pile.size() < 2)
				throw std::runtime_error("Invalid RPN expression (not enough operands).");
			int b = _pile.top(); _pile.pop();
			int a = _pile.top(); _pile.pop();
			int result = executeOperator(a, b, pile[i]);
			_pile.push(result);
		}
		else
			throw std::runtime_error("Forbidden character detected.");
	}
	if (_pile.size() != 1)
		throw std::runtime_error("Invalid RPN expression (too many operands left)");
	std::cout << _pile.top() << std::endl;
}