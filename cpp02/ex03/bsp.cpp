/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 20:09:39 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/06 15:42:30 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <math.h>

bool	bsp( Point const a, Point const b, Point const c, Point const p)
{
	Fixed w1;
	Fixed w2;

	w1 = ((a.gX() * (c.gY() - a.gY())) + ((p.gY() - a.gY()) * (c.gX() - a.gX())) - (p.gX() * (c.gY() - a.gY()))) 
		/ (((b.gY() - a.gY()) * (c.gX() - a.gX())) - ((b.gX() - a.gX()) * (c.gY() - a.gY())));
	w2 = (p.gY() - a.gY() - (w1 * (b.gY() - a.gY()))) / (c.gY() - a.gY());
	if (w1 > 0 && w2 > 0 && (w1 + w2) < 1)
		return (true);
	return (false);
}

// float area(Point const a, Point const b, Point const c) 
// {
// 	float	area = ((a.gX().toFloat() * (b.gY().toFloat() - c.gY().toFloat())) + (b.gX().toFloat() * (c.gY().toFloat()) - a.gY().toFloat()) + (c.gX().toFloat() * ( a.gY().toFloat()) - b.gY().toFloat())) / 2.0f;
// 	return (area); 
// }

// bool	isInside(Point const a, Point const b, Point const c, Point const p)
// {
// 	float big_area = area(a, b, c);
// 	float s1 = area(p, b, c);
// 	float s2 = area(a, p, c);
// 	float s3 = area(a, b, p);
// 	return (big_area == abs(s1 + s2 + s3));
// }

// bool	bsp( Point const a, Point const b, Point const c, Point const p)
// {
// 	if (isInside(a, b, c, p))
// 		return (true);
// 	return (false);
// }
