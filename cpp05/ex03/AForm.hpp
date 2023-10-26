/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:22:19 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/15 17:44:11 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

class Bureaucrat;

class AForm
{
private:
	std::string const	_name;
	bool				_sign;
	int const			_gradeToSign;
	int const			_gradeToExec;
public:
	AForm();
	AForm(std::string const &name, int toS, int toE);
	AForm(AForm const &);
	virtual	~AForm();
	AForm 					&operator=(AForm const &);
	std::string				getName()   const;
	int						getSign()   const;
	void					beSigned(Bureaucrat &);
	virtual void			execute(Bureaucrat const & executor) const = 0;
	void					canAccess(Bureaucrat const & executor) const;

	
	class GradeTooHighException : public std::runtime_error {
    public:
        GradeTooHighException();
    };

	class NoSignatureException : public std::runtime_error {
    public:
        NoSignatureException();
    };

    class GradeTooLowException : public std::runtime_error {
    public:
        GradeTooLowException();
    };
};
std::ostream	&operator<<(std::ostream &o, AForm const &rhs);
