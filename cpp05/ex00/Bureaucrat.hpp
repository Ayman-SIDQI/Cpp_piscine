/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:38:59 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/13 18:43:27 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Bureaucrat
{
private:
    std::string _name;
    int         _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string const &name, int grade);
    Bureaucrat(Bureaucrat const &);
    ~Bureaucrat();
    Bureaucrat &operator=(Bureaucrat const &);
    std::string         getName()   const;
	int                getGrade()   const;

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