/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:32:06 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/02 22:32:45 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) :
	_name(name)
{
	// std::cout << "Character paramiter constructor called" << std::endl;
	for (int i = 0; i < 4 ; i++)
	{
		_inventory[i] = NULL;
		_unequiped_inv[i] = NULL;
	}
	
}
Character::Character() :
	_name("Default")
{
	// std::cout << "Character Default constructor called" << std::endl;
	for (int i = 0; i < 4 ; i++)
	{
		_inventory[i] = NULL;
		_unequiped_inv[i] = NULL;
	}
}
Character::~Character()
{
	// std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4 ; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
		if (_unequiped_inv[i])
			delete _unequiped_inv[i];
	}
}
Character&	Character::operator=(Character& other)
{
	if (this == &other)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
		if (_unequiped_inv[i])
			delete _unequiped_inv[i];
	}
	_name = other._name;
	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	return (*this);
}

Character::Character(Character& other) :
	_name(other._name)
{
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Character inventory[" << i << "] = other.inventory[" << i << "]" << std::endl;
		this->_inventory[i] = other._inventory[i]->clone();
	}
	// std::cout << "Character copy constructor called" << std::endl;
}

std::string const& Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			this->_inventory[i] = m->clone();
			std::cout << "Equiped " << m->getType() << " to " << _name << std::endl;
			return ;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || _inventory[idx] == NULL)
		return ;
	_unequiped_inv[idx] = _inventory[idx]->clone();
	_inventory[idx] = NULL;// possible memory leak because the materia after it is not shifted
	if (idx != 3)
	{
		for (int i = idx; i < 3; i++)
		{
			_inventory[i] = _inventory[i + 1];
			_inventory[i + 1] = NULL;
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (_inventory[idx])	
		_inventory[idx]->use(target);
}

AMateria	*Character::getMateria(int idx)
{
	return	(_inventory[idx]);
}
