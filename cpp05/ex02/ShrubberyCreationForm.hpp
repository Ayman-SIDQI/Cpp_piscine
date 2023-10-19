/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:29:23 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/17 22:43:58 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
public:
    ShrubberyCreationForm(std::string const &);
    ShrubberyCreationForm(ShrubberyCreationForm const &);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);
    void	execute(Bureaucrat const & executor) const;
private:
    std::string _t;
    ShrubberyCreationForm();
};