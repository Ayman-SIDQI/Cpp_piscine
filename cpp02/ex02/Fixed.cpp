/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:20:05 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/05 18:04:11 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


const int Fixed::frc = 8;

Fixed::Fixed() : Fxd(0)
{
}

Fixed::Fixed(const int n) : Fxd(n * (1 << frc))
{
}

Fixed::Fixed(const float f) : Fxd(roundf(f * (1 << frc)))
{
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed& other)
{
	this->Fxd = other.Fxd;
	return (*this);
}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

int	Fixed::getRawBits(void) const
{
	return (Fxd);
}

void Fixed::setRawBits(int const raw)
{
	this->Fxd = raw;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(Fxd) / static_cast<float>(1 << frc));
}

int 	Fixed::toInt(void) const
{
	return (Fxd >> frc);
}

std::ostream& operator<<(std::ostream &outputs, Fixed const &Fixed)
{
	outputs << Fixed.toFloat();
	return (outputs);
}

bool 	Fixed::operator>(const Fixed& other)
{
	if (Fxd > other.Fxd)
		return (true);
	return (false);
}

bool 	Fixed::operator<(const Fixed& other)
{
	if (Fxd < other.Fxd)
		return (true);
	return (false);
}

bool 	Fixed::operator<=(const Fixed& other)
{
	if (Fxd <= other.Fxd)
		return (true);
	return (false);
}

bool 	Fixed::operator>=(const Fixed& other)
{
	if (Fxd >= other.Fxd)
		return (true);
	return (false);
}

bool 	Fixed::operator==(const Fixed& other)
{
	if (Fxd == other.Fxd)
		return (true);
	return (false);
}

bool 	Fixed::operator!=(const Fixed& other)
{
	if (Fxd != other.Fxd)
		return (true);
	return (false);
}

Fixed 	Fixed::operator+(const Fixed& other)
{
	float	a = toFloat();
	float	b = other.toFloat();
	return (Fixed(a + b));
}

Fixed 	Fixed::operator-(const Fixed& other)
{
	float	a = toFloat();
	float	b = other.toFloat();
	return (Fixed(a - b));
}

Fixed 	Fixed::operator*(const Fixed& other)
{
	return (Fixed(toFloat() * other.toFloat()));
}

Fixed 	Fixed::operator/(const Fixed& other)
{
	return (Fixed(toFloat() / other.toFloat()));
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	this->Fxd++;
	return (tmp);
}

Fixed&	Fixed::operator++(void)
{
	++Fxd;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	this->Fxd--;
	return (tmp);
}

Fixed&	Fixed::operator--(void)
{
	--Fxd;
	return (*this);
}

Fixed&	Fixed::max(Fixed& n1, Fixed& n2)
{
	return (n1 >= n2 ? n1 : n2);
}

const Fixed&	Fixed::max(const Fixed& n1, const Fixed& n2)
{
	return (static_cast<Fixed>(n1) >= static_cast<Fixed>(n2) ? n1 : n2);
}

Fixed&	Fixed::min(Fixed& n1, Fixed& n2)
{
	return (n1 <= n2 ? n1 : n2);
}


const Fixed& Fixed::min(const Fixed& n1, const Fixed& n2)
{
	return (static_cast<Fixed>(n1) <= static_cast<Fixed>(n2) ? n1 : n2);
}
