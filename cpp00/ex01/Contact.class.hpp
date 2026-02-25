/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:23:52 by masenche          #+#    #+#             */
/*   Updated: 2026/02/25 15:02:47 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
#include <string>
class Contact{
private:

public:
	Contact(void);
	~Contact(void);

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	secret;
	std::string	number;
	
};

#endif