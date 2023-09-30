/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:57:32 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/27 19:14:52 by asidqi           ###   ########.fr       */
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
	Dog(std::string Name);
	Dog(Dog& other);
	Dog&       operator=(Dog& other);

	void	makeSound()	const;
};