/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:12:57 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/05 20:55:10 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	// std::cout << "Default Constructor called" << std::endl;
}

Point::Point(const float ix, const float iy) :
	x(ix), y(iy)
{
	// std::cout << "Constructor called" << std::endl;
}

Point& Point::operator=(const Point& other)
{
	const_cast<Fixed&>(this->x) = const_cast<Fixed&>(other.x);
	const_cast<Fixed&>(this->y) = const_cast<Fixed&>(other.y);
	// std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Point::Point(const Point& other)
{
	*this = other;
	// std::cout << "Copy constructor called" << std::endl;
}

Point::~Point()
{
}

Fixed&	Point::gX() const
{
	return ((Fixed&)x);
}

Fixed&	Point::gY() const
{
	return ((Fixed&)y);
}
