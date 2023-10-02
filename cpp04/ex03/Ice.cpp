/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:31:52 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/02 18:52:44 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : 
	AMateria("ice")
{
	// std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(Ice const & src) : 
	AMateria(src.getType())
{
	// std::cout << "Ice Copy constructor called" << std::endl;
}

Ice& Ice::operator=(Ice const &other)
{
	// std::cout << "Ice Assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	type = other.type;
	return (*this);
}

Ice* Ice::clone() const
{
	return (new Ice);
}


Ice::~Ice()
{
	// std::cout << "Ice Default destructor called" << std::endl;	
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
