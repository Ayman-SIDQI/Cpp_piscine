/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:27:47 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/04 19:24:29 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *a = new Cat();
	// const WrongCat metalhead;
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	// metalhead.makeSound();
	// // Animal o;
	// // std:: cout << o.getType() << std::endl;
	// // o.makeSound();
	// // Animal *a = new WrongCat;
	// // delete a;
	// delete j;
	// delete i;
	// delete meta;
	// system ("leaks -q Animal");
	delete a;
	return (0);
}