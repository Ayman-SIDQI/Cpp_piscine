/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:36:59 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/10 16:31:01 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

class Contacts
{
public:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string dark_s;
	std::string	phone_n;
};

class Phonebook
{
public:
	Contacts 	Contacts[8];
};

bool	fillCon(Contacts *Co, int *o);
void	printCon(Phonebook pb);
void	affich(int o, Phonebook pb);
int		indexaff();