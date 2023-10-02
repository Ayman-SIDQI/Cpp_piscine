/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:07:05 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/02 21:54:08 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type) :
	type(type)
{
	// std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria() :
	type("Default")
{
	// std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria Default destructor called" << std::endl;
}

AMateria::AMateria(AMateria& other)
{
	*this = other;
	// std::cout << "AMateria Copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(AMateria& other)
{
	(std::string)type = other.type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (type);
}

AMateria* AMateria::clone() const
{
    return (AMateria*)this;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* AMateria's use called to attack " << target.getName() << " *" << std::endl;
}