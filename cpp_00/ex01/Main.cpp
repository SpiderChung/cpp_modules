/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <schung@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:25:55 by schung            #+#    #+#             */
/*   Updated: 2022/10/15 00:39:18 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook 	PhoneBook;
	std::string str;

	
	while(true)
	{
		std::cout << "Enter command:" << std::endl;
		if (!std::getline(std::cin, str))
		{
			std::cout << "So long, Farewell!" << std::endl;
		}
		else if (str == "EXIT")
		{
			std::cout << "So long, Farewell!" << std::endl;
			return (0);
		}
		else if (str == "ADD")
		{
			PhoneBook.addContact();
		}
		else if (str == "SEARCH")
		{
			PhoneBook.searchContact();
		}
		else
		{
			std::cout << "Command not found" << std::endl;
		}
	}
	return (0);
}
