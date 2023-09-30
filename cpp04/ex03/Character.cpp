/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:32:06 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/28 22:53:54 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

AMateria	**Character::_unequiped_inv = NULL;
int 		Character::_inventory_size = 0;

Character::Character(std::string const &name) :
	_name(name)
{
	// std::cout << "Character paramiter constructor called" << std::endl;
	for (int i = 0; i < 4 ; i++)
		_inventory[i] = NULL;
	
}
Character::Character() :
	_name("Default")
{
	// std::cout << "Character Default constructor called" << std::endl;
	for (int i = 0; i < 4 ; i++)
		_inventory[i] = NULL;	
}
Character::~Character()
{
	// std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4 ; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	// delete unequiped_inv fl main
}
Character&	Character::operator=(Character& other)
{
	if (this == &other)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
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

Character::Character(Character& other)
{
	// std::cout << "Character copy constructor called" << std::endl;
	*this = other;
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
			this->_inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	//save unequiped materia
	AMateria **new_unq_inv = new AMateria*[_inventory_size + 1];
	for (int i = 0; i < _inventory_size; i++)
		new_unq_inv[i] = _unequiped_inv[i];
	new_unq_inv[_inventory_size] = _inventory[idx];
	_inventory_size++;
	if (_unequiped_inv)
		delete [] _unequiped_inv;
	_inventory[idx] = NULL;
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
