/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <schung@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:10:22 by schung            #+#    #+#             */
/*   Updated: 2022/10/15 00:40:44 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONTACT_HPP_
#define _CONTACT_HPP_

#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>

class Contact
{
public:
		Contact();
		~Contact();
		void			setFirstName(std::string str);
		void			setLastName(std::string str);
		void			setNickname(std::string str);
		void			setPhoneNumber(std::string str);
		void			setDarkestSecret(std::string str);
		void			setData(void);
		bool			isEmpty(void);
		std::string		getFirstName() const;
		std::string		getLastName() const;
		std::string		getNickname() const;
		std::string		getPhoneNumber() const;
		std::string		getDarkestSecret() const;

private:
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		phone_number;
		std::string		darkest_secret;
};

#endif
