/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 13:38:44 by masenche          #+#    #+#             */
/*   Updated: 2026/05/22 14:11:20 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int val){
	typename T::iterator it = std::find(container.begin(), container.end(), val);
	if (it == container.end())
		throw Noneval();
	return it;
}