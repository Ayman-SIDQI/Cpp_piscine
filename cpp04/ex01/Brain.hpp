/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:02:51 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/04 19:17:43 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Brain
{
protected:
	std::string	_ideas[100];
public:
	Brain();
	virtual	~Brain();
	Brain(std::string ideas[100]);
	Brain(Brain const & other);
	Brain&       operator=(Brain const & other);
};
