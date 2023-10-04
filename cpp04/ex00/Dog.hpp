/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:57:32 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/04 19:15:51 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Cat.hpp"


class Dog : public Animal
{
public:
	Dog();
	~Dog();
	// Dog(std::string Name);
	Dog(Dog const & other);
	Dog&       operator=(Dog const & other);

	void	makeSound()	const;
};