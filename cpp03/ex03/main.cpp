/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:27:20 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/12 16:18:07 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main ()
{
	std::string n = "AYMAN";
	DiamondTrap robo(n);
	robo.beRepaired(69);
	robo.attack("BABAK");
	robo.whoAmI();
	// std::cout << robo.attack("MAMAK") << std::endl;
	return (0);
}