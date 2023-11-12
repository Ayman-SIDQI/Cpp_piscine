/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:35:55 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/05 12:40:42 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// std::ostream& operator<<(std::ostream &outputs, DiamondTrap const &DiamondTrap)
// {
// 	outputs << DiamondTrap.~DiamondTrap();
// 	return (outputs);
// }

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"),
	name("Default")
{
	std::cout << "DiamondTrap construction complete!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n + "_clap_name"), FragTrap(n), ScavTrap(n), 
	name(n)
{
	std::cout << "ORIGINAL att and hp " << att << "  "<< hp << std::endl;
	att = FragTrap::ATT;
	hp = FragTrap::HP;
	ep = ScavTrap::EP;
	std::cout << "DiamondTrap " << name << " construction complete!" << std::endl;
	std::cout << "DiamondTrap att and hp " << DiamondTrap::att << "  "<< DiamondTrap::hp << std::endl;
	std::cout << "FRAGTrap att and hp " << FragTrap::att << "  "<< FragTrap::hp << std::endl;
	std::cout << "MINE att and hp " << att << "  "<< hp << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& other)
{
	std::cout << "Copy constructor for DT called!" << std::endl;
	*this = other;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor for DT called!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& other)
{
	name = other.name;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout <<"Name: " << this->name << "\n" <<"clapTrap::name: " << ClapTrap::name << std::endl;
}

