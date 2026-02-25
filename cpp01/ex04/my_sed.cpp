/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_sed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 13:27:17 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:14:36 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_sed.hpp"

void	ft_sed(std::string filename, std::string s1, std::string s2, std::ifstream &ifs){
	std::string newfilename = filename + ".replace";
	std::ofstream ofs(newfilename.c_str());

	if (!ofs.is_open()){
		std::cerr << "Error: cannot create file " << newfilename << std::endl;
		return;
	}
	std::string line;
	while (std::getline(ifs, line))
	{
		size_t pos = 0;
	
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		ofs << line << std::endl;
	}
	return;
}