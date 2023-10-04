/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:56:42 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/04 19:18:01 by asidqi           ###   ########.fr       */
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
	// Cat(std::string Type);
	Cat(Cat const & other);
	Cat&       operator=(Cat const & other);

	void	makeSound()	const;
};