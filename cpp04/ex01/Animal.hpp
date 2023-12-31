/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:33:53 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/04 19:17:17 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	// Animal(std::string Type);
	Animal(Animal const & other);
	Animal&       operator=(Animal const & other);
	virtual void	makeSound()		const;
	std::string	getType()	const;
};