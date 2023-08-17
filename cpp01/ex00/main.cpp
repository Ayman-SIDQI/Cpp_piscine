/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:19:12 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/11 10:19:13 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie Z1("Jimbob");
	Z1.announce();
	Zombie *pZ2 = newZombie("LOL");
	randomChump("NIggas");
	pZ2->announce();
	delete (pZ2);
	return (0);
}