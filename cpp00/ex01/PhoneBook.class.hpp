/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:23:48 by masenche          #+#    #+#             */
/*   Updated: 2026/02/18 15:05:35 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"

class	PhoneBook{
private:
	Contact _contact[8];
	int		index;

public:
	PhoneBook(void);
	~PhoneBook(void);
	
	void	ADD();
	void	SEARCH();
};

#endif