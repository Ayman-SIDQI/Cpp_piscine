/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:27:47 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/27 23:07:02 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

// int main()
// {
// 	int	n = 6;
// 	const Animal* i = new Cat();
// 	const Animal* j = new Dog();
// 	Animal** ArrAnimal = new Animal*[n];
// 				Animal* ArrAnimal[n];
// 				for (int i = 0; i < n; i++)
// 				{
// 					if (i < (n / 2))
// 						ArrAnimal[i] = new Dog;
// 					else
// 						ArrAnimal[i] = new Cat;
// 				}
// 				for (int i = 0; i < n; i++)
// 				{
// 					ArrAnimal[i]->makeSound();
// 				}
// 				for (int i = 0; i < n; i++)
// 				{
// 					delete ArrAnimal[i];
// 				}
// 	Dog basic;
// 	{
// 		Dog tmp = basic;
// 	}
// 	delete[] ArrAnimal;
// 	system("leaks Brain");
// 	return 0;
// }
// #include "Dog.hpp"
// #include "Cat.hpp"

// void	test()
// {
// 	Animal	*ani[100];
	
// 	for (size_t i = 0; i < 100; i++)
// 	{
// 		if (i < 50)
// 			ani[i] = new Dog();
// 		else
// 			ani[i] = new Cat();
// 	}
	
// 	for (size_t i = 0; i < 100; i++)
// 		std::cout << ani[i]->getType() << std::endl;
		
// 	for (size_t i = 0; i < 100; i++)
// 		delete ani[i];
// 	const Animal* i = new Cat();
// 	const Animal* a = new Cat();
// 	const Animal* b = new Cat();

// 	i = a;
// 	i = b;

// 	delete b;
// 	delete a;
// 	delete i;
// }

// int main()
// {
// 	// const Animal* j = new Dog();
// 	// delete j;//should not create a leak
// 	// delete a;
// 	// delete b;
	
// 	test();
// 	system("leaks Brain");

// 	return	0;
// }

