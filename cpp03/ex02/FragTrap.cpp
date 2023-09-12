/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 20:11:59 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/11 22:03:59 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	hp = 100;
	ep = 100;
	att = 30;
	std::cout << "\033[1;32mConstruction of Default is complete!\033[0m" << std::endl;
}
FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	hp = 100;
	ep = 100;
	att = 30;
	std::cout << "\033[1;32mConstruction of " << name << " is complete!\033[0m" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& other)
{
	hp = other.hp;
	ep = other.ep;
	att = other.att;
	name = other.name;
	return (*this);
}

FragTrap::FragTrap(FragTrap& other)
{
	*this = other;
	std::cout << "Copy constructor called!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[1;31mDestruction!\033[0m" << std::endl;
}	

// void FragTrap::attack(const std::string& target)
// {
// 	if (this->ep > 0 && hp > 0)
// 	{
// 		std::cout << "FragTrap " << name << " attacks " \
// 		<< target << ", causing them -" << att << std::endl;
// 		ep--;
// 	}
// 	else 
// 		std::cout << "FragTrap is unresponsive..." << std::endl; 
// }

void FragTrap::highFivesGuys()
{
	std::cout << "\033[1;34m" << name << " is requesting a high five! 👋\033[0m" << std::endl;
}
