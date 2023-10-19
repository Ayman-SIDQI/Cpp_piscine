/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:38:50 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/17 22:51:09 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

 Bureaucrat::Bureaucrat() : 
    _name("Basic Bureaucrat"), _grade(150)
 {
    // std::cout << _name << " Constructed!" << std::endl;
 }
Bureaucrat::Bureaucrat(std::string const &n, int g) :
    _name(n), _grade(g)
{
    if (_grade > 150)
        throw (Bureaucrat::GradeTooLowException());
    if (_grade < 1)
        throw (Bureaucrat::GradeTooHighException());
    // std::cout << _name << "Constructed!" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &other)
{
    // std::cout << _name << "Copy Constructure!" << std::endl;
    *this = other;
}

std::string Bureaucrat::getName()  const
{
    return (_name);    
}

int Bureaucrat::getGrade()   const
{
    return (_grade);    
}

void    Bureaucrat::executeForm(AForm const & form)
{
    form.execute(*this);
}


Bureaucrat::GradeTooHighException::GradeTooHighException() : std::runtime_error("Grade Too d*mn high!")
{}

Bureaucrat::GradeTooLowException::GradeTooLowException() : std::runtime_error("Grade Too d*mn low!")
{}

Bureaucrat::~Bureaucrat()
{
    // std::cout << _name << " Destructed!" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &other)
{
    if (this != &other)
    {
        _grade = other._grade;
    }
    return (*this);
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs)
{
    o << rhs.getName() + ",  bureaucrat grade " << rhs.getGrade();
    return (o);
}
void    Bureaucrat::signForm(AForm &tbs)
{
    try
    {
        tbs.beSigned(*this);
        std::cout << _name << " signed " << tbs.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << _name << " couldn't sign " << tbs.getName() << " because "<< e.what() << std::endl;
    }   
}
