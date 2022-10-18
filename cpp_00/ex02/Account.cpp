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

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit): _accountIndex(Account::_nbAccounts++),
                                       _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    Account::_totalAmount +=initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" << "amount:"
              << this->_amount << ";created\n";
}

Account::~Account(void){

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" << "amount:"
              << this->_amount << ";closed\n";
    this->_nbAccounts--;
    this->_totalAmount -= checkAmount();
}

int		Account::checkAmount( void ) const
{
    return (this->_amount);
}

int Account::getNbAccounts()
{
    return (Account::_nbAccounts);
}

int Account::getNbWithdrawals()
{
    return (Account::_totalNbWithdrawals);
}

int Account::getTotalAmount()
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits()
{
    return (Account::_totalNbDeposits);
}

void Account::_displayTimestamp()
{
    time_t times;
    struct tm *time_ptr;

    time(&times);
    time_ptr = localtime(&times);
    std::cout << "[" << std::setfill('0')
              << time_ptr->tm_year + 1900
              << std::setw(2) << time_ptr->tm_mon
              << std::setw(2) << time_ptr->tm_mday << "_"
              << std::setw(2) << time_ptr->tm_hour
              << std::setw(2) << time_ptr->tm_min
              << std::setw(2) << time_ptr->tm_sec << "] ";
}

void Account::displayStatus() const
{
    t::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
            << this->_amount << ";deposits:" << this->_nbDeposits
            << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos()
{
    t::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";total:"
                << Account::_totalAmount << ";deposits:"
                << Account::_totalNbDeposits << ";withdrawals:"
                << Account::_totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
    int amount = this->_amount;
    this->_amount += deposit;
    t::_totalAmount += deposit;
    ++t::_totalNbDeposits;
    t::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:"
              << amount << ";deposits:" << deposit << ";amount:"
              << this->_amount << ";nb_deposits:" << ++this->_nbDeposits
              << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    t::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
                << ";p_amount:" << this->_amount
                << ";withdrawal:";
    if (withdrawal > this->_amount)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    this->_amount -= withdrawal;
    ++this->_nbWithdrawals;
    t::_totalAmount -= withdrawal;
    ++t::_totalNbWithdrawals;
    std::cout << withdrawal << ";amount:" << this->_amount
                << ";nb_withdrawals:" << this->_nbWithdrawals
                << std::endl;
    return (true);
}






