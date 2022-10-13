/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <schung@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:13:13 by schung            #+#    #+#             */
/*   Updated: 2022/10/14 02:08:39 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "./Contact.hpp"

class PhoneBook
{
public:
		PhoneBook();
		void	addContact();
		void	getMain();
		void	searchContact() const;
		~PhoneBook();

private:
		Contact contact[8];
		int		number;
		void	showContacts() const;
		void	numContacts() const;
		void	viewFullInfo(Contact contact) const;
};

#endif
