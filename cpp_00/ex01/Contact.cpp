/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <schung@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:14:48 by schung            #+#    #+#             */
/*   Updated: 2022/10/15 00:43:17 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

void	Contact::setFirstName(std::string str)
{
	this->first_name = str;
}

void	Contact::setLastName(std::string str)
{
	this->last_name = str;
}

void	Contact::setNickname(std::string str)
{
	this->nickname = str;
}

void	Contact::setPhoneNumber(std::string str)
{
	this->phone_number = str;
}

void	Contact::setDarkestSecret(std::string str)
{
	this->darkest_secret = str;
}

void	Contact::setData(void)
{
	std::string str;

	std::cout << "Please enter First Name:" << std::endl;
	std::getline(std::cin, str);
	setFirstName(str);


	std::cout << "Please enter Last Name:" << std::endl;
	std::getline(std::cin, str);
	setLastName(str);

	std::cout << "Please enter Nickname:" << std::endl;
	std::getline(std::cin, str);
	setNickname(str);

	std::cout << "Please enter Phonenumber:" << std::endl;
	std::getline(std::cin, str);
	setPhoneNumber(str);

	std::cout << "Please enter Darkest Secret:" << std::endl;
	std::getline(std::cin, str);
	setDarkestSecret(str);

	std::cout << "The new Contact is created!" << std::endl;

}

bool	Contact::isEmpty(void)
{
	if(this->getFirstName().empty())
	{
		return (true);
	}
	if(this->getLastName().empty())
	{
		return (true);
	}
	if(this->getNickname().empty())
	{
		return (true);
	}
	if(this->getPhoneNumber().empty())
	{
		return (true);
	}
	if(this->getDarkestSecret().empty())
	{
		return (true);
	}
	return (false);

}

std::string		Contact::getFirstName() const
{
	return (this->first_name);
}

std::string		Contact::getLastName() const
{
	return (this->last_name);
}

std::string		Contact::getNickname() const
{
	return (this->nickname);
}

std::string		Contact::getPhoneNumber() const
{
	return (this->phone_number);
}

std::string		Contact::getDarkestSecret() const
{
	return (this->darkest_secret);
}
