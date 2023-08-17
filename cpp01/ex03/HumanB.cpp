/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:25:19 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/11 10:25:19 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(std::string name) : name(name),
	myWeapon()
{}
HumanB::~HumanB()
{
	std::cout << "Dead\n";
}
std::string HumanB::getName() const
{
	return (this->name);
}
void HumanB::setName(std::string name)
{
	this->name = name;
	return;
}

void	HumanB::setWeapon(Weapon &myWeapon)
{
	this->myWeapon = &myWeapon;
}

void	HumanB::attack()
{
	if (this->myWeapon->getType().compare("unspecified") != 0)
		std::cout << this->name << " attacks with their " << this->myWeapon->getType() << std::endl;
	else
		std::cout << this->name << " Cannot attack cause he doesn't have a weapon" << std::endl;
}