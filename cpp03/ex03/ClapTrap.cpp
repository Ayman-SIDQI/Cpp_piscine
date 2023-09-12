/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:35:58 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/10 22:26:36 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


void ClapTrap::attack(const std::string& target)
{
	if (this->ep > 0 && hp > 0)
	{
		std::cout << "ClapTrap " << name << " attacks" \
		<< target << ", causing them -" << att << std::endl;
		ep--;
	}
	else 
		std::cout << "ClapTrap is unresponsive..." << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hp > 0)
	{
		hp -= amount;
		std::cout << name << "'s remaining HP: " << hp << std::endl;
	}
	else 
		std::cout << "ClapTrap is unresponsive..." << std::endl; 
}


void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->ep > 0 && hp > 0)
	{
		std::cout << "ClapTrap " << name << " repaired himself " << amount << std::endl;
		hp += amount;
		ep--;
	}
	else
		std::cout << "ClapTrap is unresponsive..." << std::endl; 
}

ClapTrap::ClapTrap(std:: string Name) :
	name(Name), hp(10), ep(10), att(0)
{
	std::cout << "\033[1;32mConstruction of " << name << " complete!\033[0m" << std::endl;
}

ClapTrap::ClapTrap() :
	name("Default"), hp(10), ep(10), att(0)
{
	std::cout << "\033[1;32mConstruction of Default is complete!\033[0m" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap& other)
{
	hp = other.hp;
	ep = other.ep;
	att = other.att;
	name = other.name;
	return (*this);
}

ClapTrap::ClapTrap(ClapTrap& other) 
{
	*this = other;
	std::cout << "Copy constructor called!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[1;31mDestruction!\033[0m" << std::endl;
}