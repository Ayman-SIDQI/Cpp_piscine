/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:34:01 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/14 11:21:08 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "AnimalGO is Barking..." << std::endl;
}

Animal::~Animal()
{
	std::cout << "AnimalGO ceased his decidant ways and returned to the righteous path..." << std::endl;
}