/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:38:59 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/17 21:42:14 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
    std::string const   _name;
    int                 _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string const &name, int grade);
    Bureaucrat(Bureaucrat &);
    ~Bureaucrat();
    Bureaucrat          &operator=(Bureaucrat &);
    std::string         getName()   const;
	int                 getGrade()   const;
    void                signForm(AForm &);
    void                executeForm(AForm const & form);

	class GradeTooHighException : public std::runtime_error {
    public:
        GradeTooHighException();
    };

    class GradeTooLowException : public std::runtime_error {
    public:
        GradeTooLowException();
    };
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);