/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 23:41:03 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/14 14:56:11 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


bool	dateCheck( std::string date)
{
	if (date.at(4) != '-' || date.at(7) != '-' 
	|| strtod(date.substr(0, 4).c_str(), NULL) > 2022 || strtod(date.substr(0, 4).c_str(), NULL) < 2009
	|| strtod(date.substr(5, 7).c_str(), NULL) > 12 || strtod(date.substr(5, 7).c_str(), NULL) < 1
	|| strtod(date.substr(8, 11).c_str(), NULL) > 31 || strtod(date.substr(8, 11).c_str(), NULL) < 1)
		return (true);
	return (false);
}

void	printVal(std::map<std::string, double> myMap, std::string line)
{

	std::cout << line.substr(0, 10) << " => " << line.substr(13, line.size()) 
	<< " = " << ((--myMap.upper_bound(line.substr(0, 10)))->second * strtod(line.substr(13, line.size()).c_str(), NULL)) << std::endl;
}

short	isValidNum(std::string const &sNum)
{
	for (int i = 0; sNum[i]; i++)
	{
		// std::cout << "MAMAMAMAMAM input => " << sNum[i]  << std::endl;
		if (!isnumber(sNum[i]))
			return (1);
	}
	return (0);
}


short	parseIn( std::string line )
{
	if (line.size() < 13 || line.substr(10, 3) != " | " || (!isnumber(line.at(13)) && line.at(13) != '-') || isValidNum(line.substr(13, line.size())) || dateCheck(line.substr(0, 10)))
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return (1);
	}
	else if (strtod(line.substr(13, line.size()).c_str(), NULL) < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return (1);
	}
	else if (strtod(line.substr(13, line.size()).c_str(), NULL) > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return (1);
	}
	return (0);
}

std::map<std::string, double>	fillMap( void )
{
	std::map<std::string, double>	myMap;
	std::ifstream in("data.csv");
	if (!in.good())
		throw (std::runtime_error("Error:\n	Unable to successfuly open data.csv"));
	std::string line;

	getline(in, line);
	if (line.empty() || line != "date,exchange_rate")
		throw (std::runtime_error("Error:\n	file format is not approppriate"));
	while (getline(in, line))
	{	
		if (line.size() < 12 || line.at(10) != ',' || dateCheck(line.substr(0, 10)))
			throw (std::runtime_error("Error:\n	file format is not approppriate"));
		myMap.insert(std::make_pair(line.substr(0, 10), strtod(line.substr(11, line.size()).c_str(), NULL)));
	}
	// std::cout << "SAT:	" << (--myMap.upper_bound("2021-06-13"))->first << std::endl;
	in.close();
	return (myMap);
}