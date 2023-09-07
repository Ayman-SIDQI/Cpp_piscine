/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:41:24 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/07 12:21:49 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap a("R2");
	ClapTrap b("D2");
	
	a = b;
	for (int i = 0; i < 11; i++)
	{
		a.attack("b");
		b.takeDamage(1);
		b.beRepaired(5);
	}
	b.takeDamage(1);
}