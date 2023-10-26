/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:44:12 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/19 12:12:28 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
public:
    Intern();
    Intern(Intern const &);
    ~Intern();
    Intern  &operator=(Intern const &);
    AForm   *makeForm(std::string const & formName, std::string const & target);
    AForm   *PPF(std::string);
    AForm   *RRF(std::string);
    AForm   *SCF(std::string);
};