/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 20:00:00 by masenche          #+#    #+#             */
/*   Updated: 2026/05/31 20:02:37 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Fonction Principale : Chef d'orchestre
template <typename T>
void PmergeMe::sortContainer(T& container) {
	if (container.size() <= 1) return;

	int leftover;
	bool hasLeftover = _handleLeftover(container, leftover);

	std::vector<std::pair<int, int> > pairs;
	_createSortedPairs(container, pairs);

	std::vector<int> pending;
	_buildChains(container, pending, pairs);

	_insertPending(container, pending);

	if (hasLeftover)
		_binaryInsert(container, leftover);
}

// Étape 1 : Isoler l'élément orphelin si la taille est impaire
template <typename T>
bool PmergeMe::_handleLeftover(T& container, int& leftover) {
	if (container.size() % 2 != 0) {
		leftover = container.back();
		container.pop_back();
		return true;
	}
	return false;
}

// Étape 2 : Créer les paires (Large, Small) et trier les paires par leur Large
template <typename T>
void PmergeMe::_createSortedPairs(T& container, std::vector<std::pair<int, int> >& pairs) {
	for (size_t i = 0; i < container.size(); i += 2) {
		if (container[i] < container[i+1])
			pairs.push_back(std::make_pair(container[i+1], container[i]));
		else
			pairs.push_back(std::make_pair(container[i], container[i+1]));
	}
	std::sort(pairs.begin(), pairs.end());
}

// Étape 3 : Extraire la Main Chain (éléments larges) et les éléments Pending
template <typename T>
void PmergeMe::_buildChains(T& container, std::vector<int>& pending, std::vector<std::pair<int, int> >& pairs) {
	container.clear();
	container.push_back(pairs[0].second);
	for (size_t i = 0; i < pairs.size(); ++i) {
		container.push_back(pairs[i].first);
		pending.push_back(pairs[i].second);
	}
	pending.erase(pending.begin());
}

// Étape 4 : Insérer les éléments Pending dans la Main Chain selon Jacobsthal
template <typename T>
void PmergeMe::_insertPending(T& container, std::vector<int>& pending) {
	if (pending.empty()) return;

	std::vector<int> jacobSeq = this->genererJacobsthal(pending.size());
	size_t lastJacob = 0;

	for (size_t i = 0; i < jacobSeq.size(); ++i) {
		size_t currJacob = jacobSeq[i];
		if (currJacob > pending.size()) currJacob = pending.size();
		
		for (size_t k = currJacob; k > lastJacob; --k) {
			_binaryInsert(container, pending[k - 1]);
		}
		lastJacob = currJacob;
		if (lastJacob >= pending.size()) break;
	}
}

// Utilitaire : Insertion binaire simple
template <typename T>
void PmergeMe::_binaryInsert(T& container, int value) {
	typename T::iterator it = std::lower_bound(container.begin(), container.end(), value);
	container.insert(it, value);
}
