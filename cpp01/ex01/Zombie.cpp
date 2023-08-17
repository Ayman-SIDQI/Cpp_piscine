/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:18:15 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/11 10:18:15 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie()
{}

Zombie::Zombie(std::string name, bool test)
{
	this->name = name;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}
Zombie::~Zombie() 
{
	std::cout << "Headshot! " << name << " is dead...\n";
}

void	Zombie::announce(void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
	return ;
}
