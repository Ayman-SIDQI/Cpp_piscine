/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:22:22 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/15 17:59:12 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :
    _name("Basic form"), _sign(false), _gradeToSign(150), _gradeToExec(150)
{
    std::cout << "Basic form constructed!" << std::endl;
}

Form::Form(std::string const &name, int toS, int toE) :
    _name(name), _sign(false), _gradeToSign(toS), _gradeToExec(toE)
{
    if (toS > 150 || toE > 150)
        throw GradeTooLowException();
    if (toS < 1 || toE < 1)
        throw GradeTooHighException();
    std::cout << _name << " form constructed!" << std::endl;
        
}

Form &Form::operator=(Form const &other)
{
    if (this != &other)
    {
        _sign = other._sign;
        const_cast<int &>(_gradeToSign) = other._gradeToSign;
        const_cast<int &>(_gradeToExec) = other._gradeToExec;
    }
    return (*this);
}

Form::Form(Form const &other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec)
{
    *this = other;
}

Form::~Form()
{
    std::cout << "Basic form destructed!" << std::endl;
}

std::string Form::getName()   const
{
    return (_name);
}

int Form::getSign()   const
{
    return (_sign);
}

void    Form::beSigned(Bureaucrat &signer)
{
    if (signer.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _sign = true;
}


Form::GradeTooHighException::GradeTooHighException() : std::runtime_error("Grade Too d*mn high!")
{}

Form::GradeTooLowException::GradeTooLowException() : std::runtime_error("Grade Too d*mn low!")
{}

std::ostream	&operator<<(std::ostream &o, Form const &rhs)
{
    o << rhs.getName() + "is" << rhs.getSign() << std::endl;
    return (o);
}
