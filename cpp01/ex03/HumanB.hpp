/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:25:22 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/11 10:25:22 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"Weapon.hpp"

class HumanB
{

private:
	std::string		name;
	Weapon			*myWeapon;

public:

	HumanB(std::string name);
	~HumanB();
	std::string getName() const;
	void		setName(std::string name);
	void		setWeapon(Weapon &myWeapon);
	void		attack();
};
