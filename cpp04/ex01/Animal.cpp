/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:34:01 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/27 22:13:20 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void	Animal::makeSound() const
{
	std::cout << "Animal random arbitrary sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}

Animal::Animal() :
	type("Animal")
{
	std::cout << "\033[1;32mAnimal constructor called...\033[0m" << std::endl;
}

Animal&	Animal::operator=(Animal& other)
{
	type = other.type;
	return (*this);
}

Animal::Animal(Animal& other)
{
	*this = other;	
	std::cout << "\033[1;32mCopy Animal constructor called...\033[0m" << std::endl;
}

Animal::Animal(std::string Type) : 
	type(Type)
{
	std::cout << "\033[1;32mAnimal param-constructor called...\033[0m" << std::endl;
}

Animal::~Animal()
{
	std::cout << "AnimalGO ceased his decidant ways and returned to the righteous path..." << std::endl;
}