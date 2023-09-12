/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 21:34:27 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/11 22:08:36 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap , public ScavTrap 
{
private:
	std::string	name;

public:
	DiamondTrap();
	DiamondTrap(std::string Name);
	~DiamondTrap();
	DiamondTrap(DiamondTrap& other);
	DiamondTrap&	operator=(DiamondTrap& other);
	void whoAmI();
};

// std::ostream& operator<<(std::ostream& o, DiamondTrap const & rh);