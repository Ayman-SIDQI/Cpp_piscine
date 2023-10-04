/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:38:52 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/04 19:12:14 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void	Cat::makeSound() const
{
	std::cout << "Meaaaaaaaaaaawth" << std::endl;
}

Cat::Cat()
{
	type = "Cat";
	std::cout << "\033[1;32mCat constructor called...\033[0m" << std::endl;
}

Cat&	Cat::operator=(Cat const &other)
{
	type = other.type;
	return (*this);
}

Cat::Cat(Cat const &other)
{
	*this = other;	
	std::cout << "\033[1;32mCopyCat constructor called...\033[0m" << std::endl;
}

// Cat::Cat(std::string const & Type) : 
// 	Animal(Type)
// {
// 	std::cout << "\033[1;32mCat param-constructor called...\033[0m" << std::endl;
// }
Cat::~Cat()
{
	std::cout << "CatGO ceased his decidant ways and returned to the righteous path..." << std::endl;
}