/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:38:50 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/02 22:10:25 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "MaterialSource constructor called!" << std::endl;
	for (int i = 0; i < 4; i++)
		_Materia_arr[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource& other)
{
	// std::cout << "MaterialSource copy constructor called!" << std::endl;
	*this = other;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_Materia_arr[i])
			delete (_Materia_arr[i]);
	}
	// std::cout << "MaterialSource destructor called!" << std::endl;
}

MateriaSource& MateriaSource::operator=(MateriaSource& other)
{
	if (this == &other)
		return (*this);
	//possible leaks must delete current materia array
	for (int i = 0; i < 4; i++)
		delete _Materia_arr[i];
	for (int i = 0; i < 4; i++)
		_Materia_arr[i] = other._Materia_arr[i]->clone();
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	int	i;
	for (i = 0; _Materia_arr[i]; i++) {}
	if (i < 4)
	{
		_Materia_arr[i] = m;
		std::cout << "Materia learned" << std::endl;
	}
	else
		std::cout << "Unable to learn." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_Materia_arr[i] && _Materia_arr[i]->getType() == type)
			return (_Materia_arr[i]->clone());
	}
	return (NULL);
}
