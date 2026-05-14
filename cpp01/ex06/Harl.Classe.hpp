/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.Classe.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:21:57 by masenche          #+#    #+#             */
/*   Updated: 2026/05/05 14:44:31 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASSE_HPP
# define HARL_CLASSE_HPP

#include <iostream>

class Harl{

private:
	void	DEBUG();
	void	INFO();
	void	WARNING();
	void	ERROR();

public:
	Harl();
	~Harl();

	void	complain(const std::string& level);
};



#endif