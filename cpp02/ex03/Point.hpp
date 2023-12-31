/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:12:55 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/06 15:42:17 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
private:
	const Fixed	x;
	const Fixed	y;

public:
	Point();
	Point(const float ix, const float iy);
	Point(const Point& other);
	~Point();
	Point&	operator=(const Point& other);
	Fixed&	gX() const;
	Fixed&	gY() const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);
// bool	isInside(Point const a, Point const b, Point const c, Point const p);
