/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Horde.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:18:11 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/11 10:18:12 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"



void Zombie::setHorde(Zombie* horde, std::string name)
{
	horde->name = name;
}
Zombie* zombieHorde(int N, std::string name)
{
	if (N < 0)
		return (nullptr);

	Zombie* horde = new Zombie[N];
	int		i = -1;

	while (++i < N)
	{
		horde[i].setHorde(&horde[i], name);
		// std::cout << horde[i].getHorde();
	}
	return (horde);
}