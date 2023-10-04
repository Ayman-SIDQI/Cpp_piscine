/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:38:59 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/04 19:25:28 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	Dog::makeSound()	const
{
	std::cout << "\033[1mBarking \033[0minto that good night!!" << std::endl;
}


Dog::Dog()
{
	type = "Dog";
	std::cout << "\033[1;32mDOGGO constructor called...\033[0m" << std::endl;
}

Dog&	Dog::operator=(Dog const & other)
{
	type = other.type;
	return (*this);
}

Dog::Dog(Dog const & other)
{
	*this = other;	
	std::cout << "\033[1;32mCopyDog constructor called...\033[0m" << std::endl;
}

// Dog::Dog(std::string Type) :
// 	Animal(Type)
// {
// 	std::cout << "\033[1;32mDog param-constructor called...\033[0m" << std::endl;
// }

Dog::~Dog()
{
	std::cout << "DOGGO ceased his decidant ways and returned to the righteous path..." << std::endl;
}
	