/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:31:05 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/11 14:48:48 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type("unspecified") {}
Weapon::Weapon(std::string newType): type(newType){}
Weapon::~Weapon(){}

const std::string& Weapon::getType() const
{
	const	std::string& stringRef = this->type;
	return (stringRef);
}
void	Weapon::setType(std::string newType)
{
	this->type = newType;
	return ;
}
