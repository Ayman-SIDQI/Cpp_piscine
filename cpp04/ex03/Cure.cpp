/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:02:57 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/29 15:29:20 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : 
	AMateria("cure"), type("cure")
{
	// std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(Cure const & src) : 
	AMateria("cure"), type("cure")
{
	// std::cout << "Cure Copy constructor called" << std::endl;
	*this = src;
}

Cure& Cure::operator=(Cure const &other)
{
	// std::cout << "Cure Assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	type = other.type;
	return (*this);
}

Cure* Cure::clone() const
{
	return (new Cure(*this));
}

Cure::~Cure()
{
	// std::cout << "Cure Default destructor called" << std::endl;	
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
