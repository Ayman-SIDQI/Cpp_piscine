/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:27:20 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/08 20:56:43 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
	ScavTrap robo("BABAK");
	robo.guardGate();
	for(int i = 0; i < 51; i++)
		robo.attack("MAMAK");
	robo.beRepaired(10);
	return (0);
}