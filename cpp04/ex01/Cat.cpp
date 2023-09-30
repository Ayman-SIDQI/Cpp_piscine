/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:38:52 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/27 22:45:23 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void	Cat::makeSound() const
{
	std::cout << "Meaaaaaaaaaaawth" << std::endl;
}

Cat::Cat() :
	Animal("Cat"), _dome(new Brain)
{
	std::cout << "\033[1;32mCat constructor called...\033[0m" << std::endl;
}

Cat&	Cat::operator=(Cat& other)
{
	if (this == &other)
		return (*this);
	if (_dome)
		delete	(_dome);
	_dome = new Brain(*other._dome);
	type = other.getType();
	return (*this);
}

Cat::Cat(Cat& other)
{
	*this = other;
	std::cout << "\033[1;32mCopyCat constructor called...\033[0m" << std::endl;
}

Cat::Cat(std::string Type) : 
	Animal(Type), _dome(new Brain)
{
	std::cout << "\033[1;32mCat param-constructor called...\033[0m" << std::endl;
}
Cat::~Cat()
{
	std::cout << "CatGO ceased his decidant ways and returned to the righteous path..." << std::endl;
	delete	_dome;
}