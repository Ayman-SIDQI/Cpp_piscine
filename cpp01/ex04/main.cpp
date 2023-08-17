/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 21:18:38 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/12 21:18:38 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main (int ac, char** av)
{
	if (ac <= 1 || av[2][0] == '\0')
		return (1);
	int		len = strlen(av[2]);
	std::string dreplace = std::string(av[1]) + ".replace";
	std::ifstream ifs(av[1]);//opens the file name to read from

	if (ifs.is_open() == false)// protect it
		return (std::cout << "Error\n", 1);

	std::ofstream ofs(dreplace);
	if (ofs.is_open() == false)
		return (std::cout << "Error\n", 1);
	for(std::string line; std::getline(ifs, line) ; )
	{
		while (line.find(av[2]) != std::string::npos && (std::string)av[2] != (std::string)av[3])
		{
			line.insert(line.find(av[2]), av[3]);
			line.erase(line.find(av[2]), len);
		}
		ofs << line << std::endl;
	}
	ofs.close();
	ifs.close();
	return (0);
}
