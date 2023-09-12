/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:34:28 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/11 22:02:42 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string Name);
	ScavTrap(ScavTrap& other);
	ScavTrap&	operator=(ScavTrap& other);
	~ScavTrap();
	void attack(const std::string& target);
	void guardGate();
};