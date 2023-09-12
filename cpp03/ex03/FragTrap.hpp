/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 20:12:22 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/12 15:01:31 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{

public:
	FragTrap();
	FragTrap(std::string Name);
	FragTrap(FragTrap& other);
	~FragTrap();
	FragTrap&	operator=(FragTrap& other);
	void		highFivesGuys(void);
	static const int	HP;
	static const int	ATT;
};