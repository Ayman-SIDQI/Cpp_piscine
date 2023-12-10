/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:55:53 by asidqi            #+#    #+#             */
/*   Updated: 2023/12/04 23:31:00 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int ac, char const *av[])
{
	if (ac < 2)
		return (1);
	PmergeMe glob(av);
	double duration;
	std::clock_t start = std::clock();
	glob.start(1);
	std::clock_t end = std::clock();
	duration = (static_cast<double>(end - start) * 1000 / CLOCKS_PER_SEC);
	std::cout << std::endl << "After: ";
	for (unsigned int i = 0; i < glob.uv.size(); i++)
		std::cout << glob.uv[i] << " ";
	std::cout << std::endl
			  << "Time to process a range of	" << glob.uv.size()
			  << " elements with std::[vector] :		" << std::fixed << std::setprecision(5) << duration << " us";
	start = std::clock();
	glob.start(2);
	end = std::clock();
	duration = (static_cast<double>(end - start) * 1000 / CLOCKS_PER_SEC);
	std::cout << std::endl
	<< "Time to process a range of	" << glob.uv.size()
	<< " elements with std::[list] :		" << std::fixed << std::setprecision(5) << duration << " us" << std::endl;
	return (0);
}
