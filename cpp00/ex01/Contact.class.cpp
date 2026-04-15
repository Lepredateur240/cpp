/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:23:55 by masenche          #+#    #+#             */
/*   Updated: 2026/04/15 19:06:05 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void){
	return;
}

Contact::~Contact(void){
	
}

void	Contact::setFirstName(std::string str){
	this->_first_name = str;
}

void	Contact::setLastName(std::string str){
	this->_last_name = str;
}

void	Contact::setNickname(std::string str){
	this->_nickname = str;
}

void	Contact::setSecret(std::string str){
	this->_secret = str;
}

void	Contact::setNumber(std::string str){
	this->_number = str;
}

std::string	Contact::getFirstName(void){
	return this->_first_name;
}

std::string	Contact::getLastName(void){
	return this->_last_name;
}

std::string	Contact::getNickname(void){
	return this->_nickname;
}

std::string	Contact::getSecret(void){
	return this->_secret;
}

std::string	Contact::getNumber(void){
	return this->_number;
}