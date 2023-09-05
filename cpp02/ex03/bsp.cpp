/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 20:09:39 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/05 20:58:27 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const p)
{
	Fixed w1;
	Fixed w2;

	w1 = ((a.gX() * (c.gY() - a.gY())) + ((p.gY() - a.gY()) * (c.gX() - a.gX())) - (p.gX() * (c.gY() - a.gY()))) 
		/ (((b.gY() - a.gY()) * (c.gX() - a.gX())) - ((b.gX() - a.gX()) * (c.gY() - a.gY())));
	w2 = (p.gY() - a.gY() - (w1 * (b.gY() - a.gY()))) / (c.gY() - a.gY());
	
	std::cout << w1 << std::endl;
	std::cout << "W1	" << std::endl;
	std::cout << w2 << std::endl;
	std::cout << "W2" << std::endl;
	
	if (w1 > 0 && w2 > 0 && (w1 + w2) < 1)
		return (true);
	return (false);
}
