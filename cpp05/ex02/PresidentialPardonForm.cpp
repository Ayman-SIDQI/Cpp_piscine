/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:50:44 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/18 22:11:34 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("PresidentialPardonForm", 25, 5),
	_t(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) :
	AForm(other), _t(other._t)
{
	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	if (this != &other)
		_t = other._t;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "TREE DESTROYED!" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	canAccess(executor);
    std::cout << _t << " pardoned by Sidna Zaphod Beeblebrox." << std::endl;
}
