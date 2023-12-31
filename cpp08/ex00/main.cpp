/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:35:48 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/10 18:05:09 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void )
{
	try
	{
		std::vector<int> numbers;
		// std::list<int> lstnums;
		
		int inserted[] = { 0, 5, 3, 7, 69};

		numbers.insert(numbers.begin(), inserted, inserted + 5);
		// lstnums.insert(lstnums.begin(), inserted, inserted + 5);
		
		easyfind(numbers, 69);
		easyfind(numbers, 170);
		// easyfind(lstnums, 70);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}
