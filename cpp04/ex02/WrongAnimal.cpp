/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:18:24 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/04 19:38:47 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void	WrongAnimal::makeSound() const
{
	std::cout << "3ajiiib hadchi 👉👈" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

WrongAnimal::WrongAnimal()
{
	type = "Tazawi";
	std::cout << "\033[1;32mWrongAnimal constructor called...\033[0m" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & other)
{
	type = other.type;
	return (*this);
}

WrongAnimal::WrongAnimal(WrongAnimal const & other)
{
	*this = other;	
	std::cout << "\033[1;32mCopy WrongAnimal constructor called...\033[0m" << std::endl;
}

// WrongAnimal::WrongAnimal(std::string Type) : 
// 	type(Type)
// {
// 	std::cout << "\033[1;32mWrongAnimal param-constructor called...\033[0m" << std::endl;
// }

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimalGO ceased his decidant ways and returned to the righteous path..." << std::endl;
}