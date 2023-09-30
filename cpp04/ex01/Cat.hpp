/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:56:42 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/27 19:14:48 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
private:
	Brain	*_dome;
public:
	Cat();
	~Cat();
	Cat(std::string Type);
	Cat(Cat& other);
	Cat&       operator=(Cat& other);

	void	makeSound()	const;
};