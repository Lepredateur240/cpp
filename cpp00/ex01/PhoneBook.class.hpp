/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:23:48 by masenche          #+#    #+#             */
/*   Updated: 2026/02/19 16:52:45 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"

class	PhoneBook{
private:
	Contact _contact[8];
	int		index;

	std::string formatColumn(std::string str) {
    if (str.length() > 10) {
        return str.substr(0, 9) + ".";
    }
    return str;
}

public:
	PhoneBook(void);
	~PhoneBook(void);
	
	void	ADD();
	void	SEARCH();
};

#endif