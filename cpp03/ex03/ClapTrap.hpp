/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:29:00 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/02 18:25:14 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class ClapTrap
{

protected:
	std::string	name;
	int			hp;
	int			ep;
	int			att;

public:
	void attack(const std::string& target);
	void beRepaired(unsigned int amount);
	void takeDamage(unsigned int amount);

	ClapTrap(std:: string Name);
	ClapTrap(ClapTrap& other);
	ClapTrap& operator=(ClapTrap& other);
	ClapTrap();
	~ClapTrap();
};