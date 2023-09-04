/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:20:05 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/03 18:41:05 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


const int Fixed::frc = 8;

Fixed::Fixed() : Fxd(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : Fxd(n * (1 << frc))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : Fxd(roundf(f * (1 << frc)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	this->Fxd = other.Fxd;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (Fxd);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
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