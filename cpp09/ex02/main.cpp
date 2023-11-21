/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:55:53 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/21 16:54:47 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void checkError(char const **av)
{
	double a;
	char *ch = NULL;

	for (int i = 0; av[i]; i++)
	{
		a = strtod(av[i], &ch);
		if (a < 0 || *ch != '\0')
		{
			throw("Error");
		}
	}
}

int main(int ac, char const *av[])
{
	if (ac < 2)
		return (1);
	std::vector<int> uv;
	std::list<int> ul;
	double a;
	double duration;
	char *ch = NULL;
	av = &av[1];
	try
	{
		checkError(av);
	}
	catch (const char *e)
	{
		std::cout << e << std::endl;
		return (1);
	}
	std::cout << "Before: ";
	for (int i = 0; av[i]; i++)
	{
		a = strtod(av[i], &ch);
		std::cout << a << " ";
		uv.push_back(a);
		ul.push_back(a);
	}
	std::clock_t start = std::clock();
	std::vector<int> sv = merge_insertion_sort(uv);
	std::clock_t end = std::clock();
	duration = (static_cast<double>(end - start) / CLOCKS_PER_SEC) * 1000000;
	std::cout << std::endl << "After: ";
	for (double i = 0; i < sv.size(); i++)
		std::cout << sv[i] << " ";
	std::cout << std::endl
			  << "Time to process a range of	" << uv.size()
			  << " elements with std::[vector] :	" << duration << " us";
	start = std::clock();
	std::list<int> sl = merge_insertion_sort(ul);
	end = std::clock();
	duration = (static_cast<double>(end - start) / CLOCKS_PER_SEC) * 1000000;
	std::cout << std::endl
	<< "Time to process a range of	" << uv.size()
	<< " elements with std::[list] :	" << duration << " us" << std::endl;
	return (0);
}
