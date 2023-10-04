/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 21:55:22 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/04 19:20:41 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "\033[1;32mBrain constructed!\033[0m" << std::endl;
}

Brain::Brain(Brain const & other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}


Brain::Brain(std::string ideas[100])
{
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = ideas[i];
	std::cout << "\033[1;32mBrain full of ideas constructed!\033[0m" << std::endl;
}

Brain::~Brain()
{
	std::cout << "\033[1;30mBrain Destructed!\033[0m" << std::endl;
}

Brain&	Brain::operator=(Brain const & other)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	return (*this);
}
