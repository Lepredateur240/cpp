/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_sed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 13:29:05 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:12:52 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_SED_HPP
#define MY_SED_HPP

#include <iostream>
#include <fstream>
#include <string>

void	ft_sed(std::string filename, std::string s1, std::string s2, std::ifstream &ifs);

#endif