/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_sed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 13:29:05 by masenche          #+#    #+#             */
/*   Updated: 2026/05/05 14:31:10 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_SED_HPP
#define MY_SED_HPP

#include <iostream>
#include <fstream>
#include <string>

void	ft_sed(const std::string& filename, const std::string& s1, const std::string& s2, std::ifstream &ifs);

#endif