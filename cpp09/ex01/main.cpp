/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:27:58 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/16 13:13:14 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"



int main(int ac, char ** av)
{
	if (ac != 2)
		return (1);
	std::stack<int> sNum;
	std::string authN;
	std::string sArg = std::string(av[1]);
	std::stringstream ss(sArg);

	while (ss >> authN)
	{
		if (authN.length() > 1)
			{
				std::cout << "Error" << std::endl;
				return (1);
			}
		else if (isdigit(authN.c_str()[0]))
			{
				sNum.push(atoi(authN.c_str()));
			}
		else if (authN.length() == 1  && (authN[0] == '-' || authN[0] == '+' || authN[0] == '/' || authN[0] == '*'))
		{
			calculate(sNum, authN.c_str());
		}
	}
	std::cout << "result:	" << sNum.top() << std::endl;
	return (0);
}
