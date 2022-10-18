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

Account::Account(void) : _accountIndex(Account::_nbAccounts++), _amount(0),
                         _nbDeposits(0), _nbWithdrawals(0)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" << "amount:"
              << this->_amount << ";created\n";
}

Account::~Account(void){
    Account::_nbAccounts--;
    Account::_totalAmount -= this->_amount;
    Account::_totalNbDeposits -= this->_nbDeposits;
    Account::_totalNbWithdrawals -= this->_nbWithdrawals;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" << "amount:"
              << this->_amount << ";closed\n";
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
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";total:"
                << Account::_totalAmount << ";deposits:"
                << Account::_totalNbDeposits << ";withdrawals:"
                << Account::_totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
    int amount = this->_amount;
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    ++Account::_totalNbDeposits;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:"
              << amount << ";deposits:" << deposit << ";amount:"
              << this->_amount << ";nb_deposits:" << ++this->_nbDeposits
              << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
                << "p_amount:" << this->_amount
                << ";withdrawal:";
    if (withdrawal > this->_amount)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    this->_amount -= withdrawal;
    ++this->_nbWithdrawals;
    Account::_totalAmount -= withdrawal;
    ++Account::_totalNbWithdrawals;
    std::cout << withdrawal << ";amount:" << this->_amount
                << ";nb_withdrawals:" << this->_nbWithdrawals
                << std::endl;
    return (true);
}






