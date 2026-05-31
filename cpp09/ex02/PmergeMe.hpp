/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:14:22 by masenche          #+#    #+#             */
/*   Updated: 2026/05/31 20:02:55 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <stdexcept>
#include <utility>
#include <ctime>
#include <iomanip>

class PmergeMe {
private:
	std::vector<int>	_vector;
	std::deque<int>		_deque;

	template <typename T>
	bool	_handleLeftover(T& container, int& leftover);
	template <typename T>
	void	_createSortedPairs(T& container, std::vector<std::pair<int, int> >& pairs);
	template <typename T>
	void	_buildChains(T& container, std::vector<int>& pending, std::vector<std::pair<int, int> >& pairs);
	template <typename T>
	void	_insertPending(T& container, std::vector<int>& pending);
	template <typename T>
	void	_binaryInsert(T& container, int value);

public:
	PmergeMe();
	PmergeMe(const PmergeMe& other);
	PmergeMe& operator=(const PmergeMe& other);
	~PmergeMe();

	void				execute(char **av);
	std::vector<int>	genererJacobsthal(int maxElements);
	template <typename T>
	void				sortContainer(T& container);
};

#include "PmergeMe.tpp"
