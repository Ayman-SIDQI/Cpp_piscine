/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:50:40 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/18 22:11:03 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm", 72, 45),
	_t(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) :
	AForm(other), _t(other._t)
{
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	if (this != &other)
		_t = other._t;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "TREE DESTROYED!" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	canAccess(executor);
	std::srand(std::time(NULL));
	short	randomNum = (std::rand() % 2);
	if (randomNum)
		std::cout << _t << " has been Robotomized successfully." << std::endl;
	else
		std::cout << _t << " has not been Robotomized." << std::endl;
}
