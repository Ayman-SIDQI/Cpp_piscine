/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:33:08 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/15 17:54:22 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	time_t	curr;

	curr = time(NULL);
	std::cout << std::put_time(localtime(&curr), "[%Y%m%d_%H%M%S] ");
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}
// accounts:8;total:20049;deposits:0;withdrawals:0
void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts 
	<< ";total:" << _totalAmount << ";deposits:"
	<< _totalNbDeposits << ";withdrawals:"
	<< _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit ) :
	_amount(initial_deposit), _accountIndex(_nbAccounts), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex 
	<< ";amount:" << _amount << ";created" << std::endl;
	_nbAccounts++;
	_totalAmount = _totalAmount + _amount;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" 
	<< _accountIndex << ";amount:" 
	<< _amount << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	_amount = _amount + deposit;
	_nbDeposits++;
	std::cout << ";deposit:" << deposit << ";amount:" 
	<< _amount << ";nb_deposits:" << _nbDeposits << std::endl;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" 
	<< _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl; 
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	if (withdrawal > checkAmount())
	{
		std::cout << "index:" << _accountIndex << ";p_amount:"
		<< _amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else 
	{
		std::cout << "index:" << _accountIndex << ";p_amount:"
		<< _amount << ";withdrawal:" << withdrawal
		<< ";amount:";
		_amount -= withdrawal;
		std::cout << _amount << ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		return (true);
	}
}

