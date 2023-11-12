/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:34:28 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/02 18:25:12 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string Name);
	ScavTrap(ScavTrap& other);
	ScavTrap&	operator=(ScavTrap& other);
	~ScavTrap();
	void	attack(const std::string& target);
	void	guardGate();
	static const int    EP;
};