/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:57:32 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/14 13:03:43 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Cat.hpp"


class Dog : public Animal
{
protected:
	std::string type;
public:
	Dog();
	~Dog();
	// Dog(std::string Name);
	// Dog(Dog& other);
	// Dog&       operator=(Dog& other);

};