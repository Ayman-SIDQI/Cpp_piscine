/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:44:16 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/19 12:34:20 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern()
{}

Intern::Intern(Intern const &other)
{
    if (this != &other)
        *this = other;
}

Intern &Intern::operator=(Intern const &other)
{
    (void)other;
    return(*this);
}

Intern::~Intern()
{}

AForm   *Intern::PPF(std::string _t)
{
    return (new PresidentialPardonForm(_t));
}
AForm   *Intern::RRF(std::string _t)
{
    return (new RobotomyRequestForm(_t));
}
AForm   *Intern::SCF(std::string _t)
{
    return (new ShrubberyCreationForm(_t));
}

AForm *Intern::makeForm(std::string const & formName, std::string const &target)
{
    AForm   *nf;
    std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    AForm *(Intern::*funcp[3])(std::string) = {&Intern::PPF, &Intern::RRF, &Intern::SCF};
    for (int i = 0; i < 3; i++)
    {
        if(formName.compare(forms[i]) == 0)
        {
            nf = (this->*funcp[i])(target);
            std::cout << "Intern creates " << formName << std::endl;
            return (nf);
        }
    }
    std::cerr << "The intern had an existential crisis and a mental breakdown as well as a heart attack due to " << formName << " not being an available form that he/she/zey can work with" << std::endl;
    return (NULL);
}