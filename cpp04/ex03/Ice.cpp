/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:31:52 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/03 22:34:29 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : 
	AMateria("ice")
{
	// std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(Ice const & other) : 
	AMateria(other.getType())
{
	*this = other;
	// std::cout << "Ice Copy constructor called" << std::endl;
}

Ice& Ice::operator=(Ice const &other)
{
	if (this == &other)
		return (*this);
	type = other.type;
	return (*this);
}

Ice* Ice::clone() const
{
	return (new Ice(*this));
	// return (new Ice);
}


Ice::~Ice()
{
	// std::cout << "Ice Default destructor called" << std::endl;	
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
