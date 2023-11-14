/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:27:58 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/14 16:09:17 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char ** av)
{
	if (ac != 2)
		return (1);
	std::stack<int> sNum;
	std::string sArg = std::string(av[1]);
	std::stringstream ss(sArg);
	ss >> 
	return (0);
}