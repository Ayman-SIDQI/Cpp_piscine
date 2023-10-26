/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:38:31 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/19 12:34:31 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

// int main()
// {
//     try
//     {
//         Bureaucrat              aak("aak", 5);
//         Intern                  doodooShirt();
//         AForm                   *pForm;
//         // pForm = doodooShirt.makeForm("robotomy request", "Lin");
//         // aak.signForm(a);
//         // aak.signForm(b);
//         // aak.signForm(c);
//         // aak.executeForm(a);
//     }
//     catch (std::exception &e)
//     {
//         std::cout << e.what() << std::endl;
//     }
//     return (0);
// }

int main( void )
{
    {
        Intern  someRandomIntern;
        AForm*   rrf;

        // rrf = someRandomIntern.makeForm("robotomy", "Bender");
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        delete rrf;
    }

    try {
        Bureaucrat bureaucrat("ash", 2); // error with 200
        ShrubberyCreationForm form1("Shrubbery");
        RobotomyRequestForm form2("Robotomy");
        PresidentialPardonForm form3("President");

        std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
        bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);
        std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
        bureaucrat.signForm(form2);
        bureaucrat.executeForm(form2);
        bureaucrat.executeForm(form2);
        bureaucrat.executeForm(form2);
        bureaucrat.executeForm(form2);
        std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl;
        bureaucrat.signForm(form3);
        bureaucrat.executeForm(form3);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}
