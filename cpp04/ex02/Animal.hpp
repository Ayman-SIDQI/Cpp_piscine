/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:33:53 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/04 19:20:19 by asidqi           ###   ########.fr       */
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
	// Animal(std::string Name);
	Animal(Animal const & other);
	Animal&       operator=(Animal const & other);
	virtual void	makeSound()		const = 0;
	std::string	getType()	const;
};