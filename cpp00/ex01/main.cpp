/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:27:33 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/10 16:31:59 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

int main ()
{
	Phonebook 	pb;
	std::string cmd;
	int			i = 0;

	while (true)
	{
		std::cout << "Enter your command:" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			fillCon(&pb.Contacts[i % 8], &i);
		else if (cmd == "SEARCH")
		{
			printCon(pb);
			affich(indexaff(), pb);
		}
		else if (cmd == "EXIT")
			break ;
		if (std::cin.eof())
		break;
	}
	return (0);
}
