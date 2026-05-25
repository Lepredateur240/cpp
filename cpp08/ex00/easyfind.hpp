/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 13:38:34 by masenche          #+#    #+#             */
/*   Updated: 2026/05/22 14:09:11 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <exception>
class Noneval : public std::exception {
public:
    virtual const char* what() const throw() { return "None val is found"; }
};

#include "easyfind.tpp"

#endif