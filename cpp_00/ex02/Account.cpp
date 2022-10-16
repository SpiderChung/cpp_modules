/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <schung@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:00:09 by schung            #+#    #+#             */
/*   Updated: 2022/10/16 17:00:57 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "iomanip"
#include "iostream"
#include "ctime"

Account::Account(int initial_deposit)
{

}

Account::~Account()
{

}

Account::Account()
{

}

void Account::_displayTimestamp()
{
    time_t time;
    struct tm time_ptr;

    time_ptr = localtime(&time);
    std::cout << "[" << std::setfill('0')
              << ptr->tm_year + 1900
              << std::setw(2) << ptr->tm_mon
              << std::setw(2) << ptr->tm_mday << "_"
              << std::setw(2) << ptr->tm_hour
              << std::setw(2) << ptr->tm_min
              << std::setw(2) << ptr->tm_sec << "]_";
}

