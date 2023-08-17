/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:25:16 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/11 10:25:16 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"Weapon.hpp"

class HumanA
{

private:
	std::string		name;
	Weapon&			myWeapon;

public:

	HumanA(std::string name, Weapon &Weapon);
	~HumanA();
	std::string getName() const;
	void setName(std::string name);
	void	attack();
};
