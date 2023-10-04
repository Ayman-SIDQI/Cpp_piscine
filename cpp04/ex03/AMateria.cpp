/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:07:05 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/04 19:24:02 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

// AMateria::AMateria(std::string const & type) :
// 	type(type)
// {
// 	// std::cout << "AMateria Default constructor called" << std::endl;
// }

AMateria::AMateria() :
	type("Default")
{
	// std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria Default destructor called" << std::endl;
}

AMateria::AMateria(AMateria const & other)
{
	*this = other;
	// std::cout << "AMateria Copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(AMateria const & other)
{
	(std::string)type = other.type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* AMateria's use called to attack " << target.getName() << " *" << std::endl;
}