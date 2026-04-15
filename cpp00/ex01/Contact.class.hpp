/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:23:52 by masenche          #+#    #+#             */
/*   Updated: 2026/04/15 19:10:03 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
#include <string>
class Contact{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_secret;
	std::string	_number;
	

public:
	Contact(void);
	~Contact(void);

	void		setFirstName(std::string str);
	void		setLastName(std::string str);
	void		setNickname(std::string str);
	void		setSecret(std::string str);
	void		setNumber(std::string str);
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickname(void);
	std::string	getSecret(void);
	std::string	getNumber(void);
	
};

#endif