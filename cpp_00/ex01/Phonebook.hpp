/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <schung@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:13:13 by schung            #+#    #+#             */
/*   Updated: 2022/10/15 00:42:14 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "./Contact.hpp"

class PhoneBook
{
public:
		PhoneBook();
		~PhoneBook();
		void	addContact();
		void	getHint();
		void	searchContact() const;
	
private:
		Contact contact[8];
		int		number;
		void	showContacts() const;
		void	numContact() const;
		void	showContactInfo(Contact contact) const;
};

#endif
