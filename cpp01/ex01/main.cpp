/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:18:08 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/11 10:18:09 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie	*pHorde = zombieHorde(3, "Jimbob");
	pHorde[0].announce();
	pHorde[1].announce();
	pHorde[2].announce();
	delete [] pHorde;
	return (0);
}