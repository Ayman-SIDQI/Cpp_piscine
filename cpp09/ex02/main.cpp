/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:55:53 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/17 22:44:49 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<double> backtrack(std::vector<double>, int dup)
{
	dup *= 2;
}

int main(int ac, char const *av[])
{
	if (ac < 2)
		return (1);
	std::vector<double> ul(ac - 1);
	double		a;
	char		*ch = NULL;
	av = &av[1];

	for (int i = 0; av[i]; i++)
	{
		a = strtod(av[i], &ch);
		// std::cout << *ch << " ";
		if (a < 0 || *ch != '\0' || /* atoi(av[i]) != a and need to check empty string */)
		{
			std::cout << "Error" << std::endl;
			return (1);
		}
		ul[i] = a;
		std::cout << ul[i] << " ";
		backtrack(ul, 1);
	}
		std::cout << "BRUH" << std::endl;
	return (0);
}
