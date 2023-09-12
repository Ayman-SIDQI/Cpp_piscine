/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:29:00 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/10 13:30:00 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string	name;
	int			hp;
	int			ep;
	int			att;
public:
	void attack(const std::string& target);
	void beRepaired(unsigned int amount);
	void takeDamage(unsigned int amount);

	ClapTrap(std:: string Name);
	ClapTrap();
	ClapTrap(ClapTrap& other);
	ClapTrap& operator=(ClapTrap& other);
	~ClapTrap();
};