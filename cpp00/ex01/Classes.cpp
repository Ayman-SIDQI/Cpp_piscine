/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:38:18 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/10 16:31:45 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

std::string	trunk(std::string tunks)
{
	if (tunks.length() > 10)
		return (tunks.substr(0, 9) + ".");
	return tunks;
}

void	affich(int o, Phonebook pb)
{
	if ((o - 1) > 7 || pb.Contacts[o - 1].first_name.empty())
		return ;
	std::cout << (o)
		<< "'s First name: " << pb.Contacts[o - 1].first_name << std::endl
		<< "Last name: " << pb.Contacts[o - 1].last_name << std::endl
		<< "Nickname: " << pb.Contacts[o - 1].nickname << std::endl
		<< "Phone number: " << pb.Contacts[o - 1].phone_n << std::endl
		<< "Dark secret: " << pb.Contacts[o - 1].dark_s << std::endl;
}

int	indexaff()
{
	std::string			ind;
	std::cout << "Input the index of the Contact you wish to see:" << std::endl;
	std::getline(std::cin, ind);
	std::stringstream	ss(ind);
	int num;
	ss >> num;
	for (int i = 0; i < 7; i++)
		if (num == (i + 1))
			return (num);
	return(69);
}

void	printCon(Phonebook pb)
{
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|" << std::setw(10) << "index"
		<< "|"	<< std::setw(10) << "first name"
		<< "|"	<< std::setw(10) << "last name"
		<< "|"	<< std::setw(10) << "nickname" << "|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "|" << std::setw(10) << (i + 1)
		<< "|"	<< std::setw(10) << trunk(pb.Contacts[i].first_name)
		<< "|"	<< std::setw(10) << trunk(pb.Contacts[i].last_name)
		<< "|"	<< std::setw(10) << trunk(pb.Contacts[i].nickname) << "|" << std::endl;
	}
	 
}

bool	fillCon(Contacts *Co, int *o)
{
	std::string ans[5];

	std::cout << "What's the contact's first name:" << std::endl;;
	std::getline(std::cin, ans[0]);
	std::cout << "What's the contact's last name:" << std::endl;;
	std::getline(std::cin, ans[1]);
	std::cout << "What's the contact's nickname:" << std::endl;;
	std::getline(std::cin, ans[2]);
	std::cout << "What's the contact's darkest secret:" << std::endl;;
	std::getline(std::cin, ans[3]);
	std::cout << "What's the contact's phone_n:" << std::endl;;
	std::getline(std::cin, ans[4]);

	for(int i = 0; i < 4; i++)
		if(ans[i].empty())
			return (true);

	Co->first_name = ans[0];
	Co->last_name = ans[1];
	Co->nickname = ans[2];
	Co->dark_s = ans[3];
	Co->phone_n = ans[4];
	(*o)++;
	return (false);
}
