/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <schung@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:55:03 by schung            #+#    #+#             */
/*   Updated: 2022/10/15 00:42:31 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->number = 0;
}

PhoneBook:: ~PhoneBook()
{

}

void PhoneBook::addContact(void)
{
	if(this->number == 8 || this->number == 0) 
	{
		this->contact[0].setData();
		if(this->contact[0].isEmpty())
		{
			std::cout << "A contact cannot have empty fields" << std::endl;
			return ;
		}
	}
	else
	{
		this->contact[this->number].setData();
		if(this->contact[this->number].isEmpty())
		{
			std::cout << "A contact cannot have empty fields" << std::endl;
			return ;
		}
	}
	this->number++;
}

void PhoneBook::getHint(void)
{
	std::cout << "+-------------------------------------------------------+" << std::endl;
	std::cout << "|                  AVAILABLE COMMANDS                   |" << std::endl;
	std::cout << "+-------------------------------------------------------+" << std::endl;
	std::cout << "|                                                       |" << std::endl;
	std::cout << "|     ADD     -   Add a contact                         |" << std::endl;
	std::cout << "|                                                       |" << std::endl;
	std::cout << "|     SEARCH  -   Find a contact                        |" << std::endl;
	std::cout << "|                                                       |" << std::endl;
	std::cout << "|     EXIT    -   exit from PhoneBook                   |" << std::endl;
	std::cout << "|                                                       |" << std::endl;
	std::cout << "+-------------------------------------------------------+" << std::endl;
}

void PhoneBook::showContacts() const
{
	std::cout << "+--------------------------------------+\n";
	std::cout << "|Index| FirstName| LastName | NickName |\n";
	std::cout << "+--------------------------------------+\n";
	for (int i = 0; i < this->number; i++)
	{
		std::cout <<"|"<< std::setw(5) << i + 1 << "|";
		if (this->contact[i].getFirstName().length() > 10)
		{
			std::cout << this->contact[i].getFirstName().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << this->contact[i].getFirstName() << "|";
		}
		if (this->contact[i].getLastName().length() > 10)
		{
			std::cout << this->contact[i].getFirstName().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << this->contact[i].getLastName() << "|";
		}
		if (this->contact[i].getNickname().length() > 10)
		{
			std::cout << this->contact[i].getNickname().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << this->contact[i].getNickname() << "|";
		}
		std::cout << "\n";
	}
	std::cout << "+--------------------------------------+\n";
}

void PhoneBook::showContactInfo(Contact contact) const
{
	std::cout << "|" << "FirstName:       |" << std::setw(10) << contact.getFirstName() << "|\n";
	std::cout << "|" << "LastName:        |" << std::setw(10) << contact.getLastName() << "|\n";
	std::cout << "|" << "NickName:        |" << std::setw(10) << contact.getNickname() << "|\n";
	std::cout << "|" << "Phone Number:    |" << std::setw(10) << contact.getPhoneNumber() << "|\n";
	std::cout << "|" << "Darkest Secret:  |" << std::setw(10) << contact.getDarkestSecret() << "|\n";
}

void	PhoneBook::searchContact() const
{
	if (this->number == 0)
	{
		std::cout << "Sorry, PhoneBook is empty\n";
		return ;
	}
	showContacts();
	numContact();
}

void	PhoneBook::numContact(void) const
{
	std::string s_id;
	int	index;

	std::cout << "Enter num contact:\n";
	getline(std::cin, s_id);
	index = atoi(s_id.c_str());
	if (index <= 0 || index > this->number)
	{
		std::cout << "Contact not found :(\n";
		return ;
	}
	showContactInfo(contact[index - 1]);
}
