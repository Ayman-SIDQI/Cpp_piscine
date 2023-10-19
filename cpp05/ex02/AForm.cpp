/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:22:22 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/15 17:59:12 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() :
    _name("Basic AForm"), _sign(false), _gradeToSign(150), _gradeToExec(150)
{
    // std::cout << "Basic AForm constructed!" << std::endl;
}

AForm::AForm(std::string const &name, int toS, int toE) :
    _name(name), _sign(false), _gradeToSign(toS), _gradeToExec(toE)
{
    if (toS > 150 || toE > 150)
        throw GradeTooLowException();
    if (toS < 1 || toE < 1)
        throw GradeTooHighException();
    // std::cout << _name << " AForm constructed!" << std::endl;
        
}

AForm &AForm::operator=(AForm const &other)
{
    if (this != &other)
    {
        _sign = other._sign;
        const_cast<int &>(_gradeToSign) = other._gradeToSign;
        const_cast<int &>(_gradeToExec) = other._gradeToExec;
    }
    return (*this);
}

AForm::AForm(AForm const &other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec)
{
    *this = other;
}

AForm::~AForm()
{
    // std::cout << "Basic AForm destructed!" << std::endl;
}

std::string AForm::getName()   const
{
    return (_name);
}

int AForm::getSign()   const
{
    return (_sign);
}

void    AForm::beSigned(Bureaucrat &signer)
{
    if (signer.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _sign = true;
}

void    AForm::canAccess(Bureaucrat const & executor) const
{
    if (getSign() == false )
        throw NoSignatureException();
    if (executor.getGrade() > _gradeToExec)
        throw GradeTooLowException();
}

AForm::GradeTooHighException::GradeTooHighException() : std::runtime_error("Grade Too d*mn high!")
{}

AForm::GradeTooLowException::GradeTooLowException() : std::runtime_error("Grade Too d*mn low!")
{}

AForm::NoSignatureException::NoSignatureException() : std::runtime_error("Form is not signed!")
{}

std::ostream	&operator<<(std::ostream &o, AForm const &rhs)
{
    o << rhs.getName() + "is" <<  std::boolalpha << rhs.getSign() << std::endl;
    return (o);
}
