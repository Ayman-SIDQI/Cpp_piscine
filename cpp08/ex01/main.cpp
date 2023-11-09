/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:51:30 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/09 22:17:31 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
int main( void )
{
	try
	{
		int N = 1000;
		Span stan(N);
		// std::srand(std::time(NULL));

		// std::list<unsigned int> lst;
		// std::list<unsigned int> lst2;
		// std::list<unsigned int>::iterator randVal = lst.begin();
		// std::list<unsigned int>::iterator randVal2 = lst2.begin();

		// for (int i = 0; i < 10; i++)
		// {
		// 	lst.push_back(std::rand());
		// 	lst2.push_back(std::rand());
		// }
		// std::list<unsigned int>::iterator brandVal = lst.begin();
		// std::list<unsigned int>::iterator brandVal2 = lst2.begin();
		// randVal = lst.end();
		// randVal2 = lst2.end();
		// stan.addNumber(brandVal, randVal);
		// stan.addNumber(brandVal2, randVal2);

		
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