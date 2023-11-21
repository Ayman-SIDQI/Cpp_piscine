/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 23:04:30 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/16 15:41:38 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main ( int ac, char **av )
{
	std::string line;
	std::ifstream in(av[1]);
	
	if (ac != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}
	try
	{
		std::map<std::string, double>	myMap = fillMap();
		try
		{
			if (!in.good())
				throw (std::runtime_error("Error:\n	Unable to successfuly open the input file."));
			getline(in, line);
			if (line.empty() || line != "date | value")
				throw (std::runtime_error("Error:\n	file format is not approppriate"));
			while (getline(in, line))
			{
				if (line.empty())
					throw (std::runtime_error("Error:\n	file format is not approppriate"));
				if (parseIn(line))
				 	continue ;
				printVal(myMap, line);
			}
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
	in.close();
	return (0);
}