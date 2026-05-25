/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:25:47 by masenche          #+#    #+#             */
/*   Updated: 2026/05/22 13:53:11 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename what>
void swap(what& a, what& b){
	what temp = a;
	a = b;
	b = temp;
	
}

template <typename what>
const what& max(const what& a,const what& b){
	if (a > b)
		return a;
	else
		return b;
}

template <typename what>
const what& min(const what& a,const what& b){
	if (a < b)
		return a;
	else
		return b;
}

#endif