/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:58:07 by masenche          #+#    #+#             */
/*   Updated: 2026/05/20 19:11:28 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename it, typename func>
void iter(it *array, const int len, func f){
	if (!array)
		return;
	for (int i = 0; i < len; i++)
		f(array[i]);
}


#endif