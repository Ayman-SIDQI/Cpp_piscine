/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:25:13 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/11 10:25:13 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &Weapon) : name(name),
myWeapon(Weapon)
{}

HumanA::~HumanA()
{
	std::cout << "Dead\n";
}
std::string HumanA::getName() const
{
	return (this->name) ;
}
void HumanA::setName(std::string name)
{
	this->name = name;
	return ;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->myWeapon.getType() << std::endl;
}
