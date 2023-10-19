/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:29:17 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/18 19:29:59 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:
    RobotomyRequestForm(std::string const &);
    RobotomyRequestForm(RobotomyRequestForm const &);
    ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(RobotomyRequestForm const &);
    void	execute(Bureaucrat const & executor) const;
private:
    std::string _t;
    RobotomyRequestForm();
};