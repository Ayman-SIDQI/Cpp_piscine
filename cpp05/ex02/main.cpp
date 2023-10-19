/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:38:31 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/18 22:39:11 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat              aak("aak", 5);
        Bureaucrat              bak("bak", 130);
        Bureaucrat              cak("cak", 40);
        PresidentialPardonForm  a("skywalker");
        ShrubberyCreationForm   b("CHAJRA");
        RobotomyRequestForm     c("Skywalker");
        aak.signForm(a);
        aak.signForm(b);
        aak.signForm(c);
        aak.executeForm(a);
        bak.executeForm(b);
        cak.executeForm(c);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}