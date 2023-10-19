/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:22:19 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/15 17:44:11 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const	_name;
	bool				_sign;
	int const			_gradeToSign;
	int const			_gradeToExec;
public:
	Form();
	Form(std::string const &name, int toS, int toE);
	Form(Form const &);
	~Form();
	Form 					&operator=(Form const &);
	std::string				getName()   const;
	int						getSign()   const;
	void					beSigned(Bureaucrat &);

	
	class GradeTooHighException : public std::runtime_error {
    public:
        GradeTooHighException();
    };

    class GradeTooLowException : public std::runtime_error {
    public:
        GradeTooLowException();
    };
};
std::ostream	&operator<<(std::ostream &o, Form const &rhs);
