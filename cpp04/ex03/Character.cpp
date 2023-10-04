/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:51:39 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/04 19:45:16 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : 
	_name(name)
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
		_unequiped_inv[i] = NULL;
	}
}

Character::Character(void) : 
	_name("Default")
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
		_unequiped_inv[i] = NULL;
	}
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
		if (other._unequiped_inv[i])
			_unequiped_inv[i] = other._unequiped_inv[i]->clone();
		else
			_unequiped_inv[i] = NULL;
	}
}

Character&	Character::operator=(Character const & other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		if (other._unequiped_inv[i])
			_unequiped_inv[i] = other._unequiped_inv[i]->clone();
	}
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		if (_unequiped_inv[i])
			delete _unequiped_inv[i];
	}
}

void	Character::equip(AMateria* m)
{
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
	for (int i = 0; i < 4; i++)
	{
		if (!_unequiped_inv[i])
		{
			_unequiped_inv[i] = _inventory[idx];
			_inventory[idx] = NULL;
			std::cout << "Unequiped!" << std::endl;
			return ;
		}

	}
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
