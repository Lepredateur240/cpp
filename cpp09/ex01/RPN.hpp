/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:24:02 by masenche          #+#    #+#             */
/*   Updated: 2026/05/25 16:06:15 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
#include <cctype>
#include <stdexcept>

class RPN
{
private:
	std::stack<int> _pile;

	bool	isOperator(char c);
	int		executeOperator(int a, int b, char o);
public:
	RPN();
	RPN(const RPN& other);
	RPN& operator=(const RPN& other);
	~RPN();

	void	loadrpn(std::string pile);
};


