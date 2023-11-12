/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:51:30 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/10 18:57:10 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
int main( void )
{
	try
	{
		int N = 10;
		Span stan(N);
		// std::srand(std::time(NULL));

		// std::list<unsigned int> lst;
		// std::list<unsigned int> lst2;
		// std::list<unsigned int>::iterator randVal = lst.begin();

		// for (int i = 0; i < N - 1; i++)
		// {
		// 	unsigned int a = std::rand();
		// 	lst.push_back(a);
		// }
		// std::list<unsigned int>::iterator brandVal = lst.begin();
		// for (randVal = lst.begin(); randVal != lst.end(); ++randVal)//print the values
		// {
		// 	std::cout << *randVal << std::endl;
		// }
		// stan.addNumber(brandVal, randVal);
		

		
		stan.addNumber(79);
		stan.addNumber(69);
		stan.addNumber(72);
		stan.addNumber(74);
		std::cout << "short	:" << stan.shortestSpan() << std::endl;
		std::cout << "long	:" << stan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}