/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:30:55 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/05 20:53:02 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point const	a(0.0f, 5.0f);
	Point const	b(3.0f, 0.0f);
	Point const	c(0.0f, 0.0f);
	Point const	f(1.44f, 2.39f);

	if (bsp(a, b, c, f))
		std::cout << "Inside" << std::endl;
	else 
		std::cout << "Outside" << std::endl;
	return (0);
}