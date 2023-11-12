/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 23:04:30 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/12 23:24:32 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main ( int ac, char **av )
{
	
	if (ac != 2)
		return (1);
			// std::ofstream o(av[2]);
			// !o.fail()
			// o.close();
	std::ifstream in(av[1]);
	std::string line;
	try
	{
		std::map<std::string, double>	myMap = fillMap();
		try
		{
			
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	// if (!in.good())
	// 	return (1);
	// while (getline(in, line))
	// {
	// 	// if (line.empty())
	// 	// 	std::cout << "Empty line received" << line << std::endl;
	// 	std::cout << "line received:	" << line << std::endl;
	// }
	in.close();
	return (0);
}