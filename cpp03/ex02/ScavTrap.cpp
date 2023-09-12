/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:34:30 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/11 22:02:32 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	hp = 100;
	ep = 50;
	att = 20;
	std::cout << "\033[1;32mConstruction of Default is complete!\033[0m" << std::endl;
}
ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	hp = 100;
	ep = 50;
	att = 20;
	std::cout << "\033[1;32mConstruction of " << name << " is complete!\033[0m" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap& other)
{
	hp = other.hp;
	ep = other.ep;
	att = other.att;
	name = other.name;
	return (*this);
}

ScavTrap::ScavTrap(ScavTrap& other)
{
	*this = other;
	std::cout << "Copy constructor called!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[1;31mDestruction!\033[0m" << std::endl;
}	

void ScavTrap::attack(const std::string& target)
{
	if (this->ep > 0 && hp > 0)
	{
		std::cout << "ScavTrap " << name << " attacks " \
		<< target << ", causing them -" << att << std::endl;
		ep--;
	}
	else 
		std::cout << "ScavTrap is unresponsive..." << std::endl; 
}

void ScavTrap::guardGate()
{
	std::cout << "\033[1;33m" << name << "'s in Gate Keeper mode!\033[0m" << std::endl;
}

