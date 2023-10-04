/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:57:32 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/04 19:18:23 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
private:
	Brain	*_dome;
public:
	Dog();
	~Dog();
	// Dog(std::string Name);
	Dog(Dog const & other);
	Dog&       operator=(Dog const & other);

	void	makeSound()	const;
};