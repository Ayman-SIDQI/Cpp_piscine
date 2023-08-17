/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 21:25:08 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/14 20:28:00 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout <<  "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
	std::cout <<  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level)
{
	int	i;
	std::string opt[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(i = 0; i < 4; i++)
	{
		if (level == opt[i])
			break;
	}
	void (Harl::*funcp[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	switch (i)
	{
		case 0 :
			(this->*funcp[i++])();
		case 1 :
			(this->*funcp[i++])();
		case 2 :
			(this->*funcp[i++])();
		case 3 :
			(this->*funcp[i])();
			break;
		default :
			std::cout << "Invalid input." << std::endl;
	}
	return ;
}