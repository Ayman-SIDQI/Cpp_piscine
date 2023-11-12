/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:51:39 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/09 17:50:36 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : 
	_name(name)
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
	_unequiped_inv = NULL;
}

Character::Character(void) : 
	_name("Default")
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
	_unequiped_inv = NULL;
}

Character::Character(Character const & other) : 
	_name(other._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

Character&	Character::operator=(Character const & other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
	}
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	delete _unequiped_inv;
}

void	Character::equip(AMateria* m)
{
	delete _unequiped_inv;
	_unequiped_inv = NULL;
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout << "Equiped!" << std::endl;
			return ;
		}
	}
	std::cout << "Equipment full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Invalid idx" << std::endl;
		return ;
	}
	_unequiped_inv = _inventory[idx];
	_inventory[idx] = NULL;
	std::cout << "Unequiped!" << std::endl;
	return ;
	std::cout << "Cannot unequipe!" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Invalid idx" << std::endl;
		return ;
	}
	if (_inventory[idx])
	{
		_inventory[idx]->use(target);
		std::cout << "Character " << _name << " uses " << _inventory[idx]->getType() << std::endl;
	}
	else
		return (std::cout << "Character " << _name << " can't use" << std::endl, void());
}

std::string const& Character::getName() const
{
	return (_name);
}
