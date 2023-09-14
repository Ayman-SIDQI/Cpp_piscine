/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:56:42 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/14 13:02:00 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Dog.hpp"


class Cat : public Animal
{
protected:
	std::string type;
public:
	Cat();
	~Cat();
	// Cat(std::string Name);
	// Cat(Cat& other);
	// Cat&       operator=(Cat& other);

};