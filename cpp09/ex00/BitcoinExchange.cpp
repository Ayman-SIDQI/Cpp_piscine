/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 23:41:03 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/12 23:48:06 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


bool	dateCheck( std::string date)
{
	if (date.at(4) != '-' || date.at(7) != '-' 
	|| strtod(date.substr(0, 4).c_str(), NULL) > 2022 || strtod(date.substr(0, 4).c_str(), NULL) < 2009
	|| strtod(date.substr(5, 7).c_str(), NULL) > 12 || strtod(date.substr(5, 7).c_str(), NULL) < 0
	|| strtod(date.substr(8, 11).c_str(), NULL) > 31 || strtod(date.substr(8, 11).c_str(), NULL) < 0)
		return (true);
	return (false);
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
	// std::cout << "map element:	" << myMap.at("2019-08-21") << std::endl;
	std::map<int, std::string>::iterator it = myMap.lower_bound("2021-06-13");
	std::cout << "map element:	" << myMap["2021-06-13"] << std::endl;
	in.close();
	return (myMap);
}