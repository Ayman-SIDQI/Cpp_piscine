/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:29:07 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/18 22:09:18 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:
    PresidentialPardonForm(std::string const &);
    PresidentialPardonForm(PresidentialPardonForm const &);
    ~PresidentialPardonForm();
    PresidentialPardonForm &operator=(PresidentialPardonForm const &);
    void	execute(Bureaucrat const & executor) const;
private:
    std::string _t;
    PresidentialPardonForm();
};