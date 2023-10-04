/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:07:54 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/04 19:19:53 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Meaaaaaaaaaaawth" << std::endl;
}

WrongCat::WrongCat() :
	WrongAnimal()
{
	type = "WrongCat";
	std::cout << "\033[1;32mWrongCat constructor called...\033[0m" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const & other)
{
	type = other.type;
	return (*this);
}

WrongCat::WrongCat(WrongCat const & other) :
	WrongAnimal(other)
{
	*this = other;	
	std::cout << "\033[1;32mCopyWrongCat constructor called...\033[0m" << std::endl;
}

// WrongCat::WrongCat(std::string Type) : 
// 	WrongAnimal(Type)
// {
// 	std::cout << "\033[1;32mWrongCat param-constructor called...\033[0m" << std::endl;
// }
WrongCat::~WrongCat()
{
	std::cout << "WrongCatGO ceased his decidant ways and returned to the righteous path..." << std::endl;
}

