/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 20:12:22 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/11 22:02:51 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
	FragTrap();
	FragTrap(std::string Name);
	FragTrap(FragTrap& other);
	~FragTrap();
	FragTrap&	operator=(FragTrap& other);
	// void		attack(const std::string& target);
	void		highFivesGuys(void);
};