/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:20:25 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/05 18:10:02 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
	int					Fxd;
	static const int	frc;
public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed(const int n);
	Fixed(const float n);
	~Fixed();
	Fixed& 	operator=(const Fixed& other);
	int		getRawBits(void) const;
	void 	setRawBits(int const raw);
	float 	toFloat(void)const;
	int 	toInt( void )const;
	
	bool 	operator>(const Fixed& other);
	bool 	operator<(const Fixed& other);
	bool 	operator>=(const Fixed& other);
	bool 	operator<=(const Fixed& other);
	bool 	operator==(const Fixed& other);
	bool 	operator!=(const Fixed& other);
	
	
	Fixed 	operator+(const Fixed& other);
	Fixed 	operator-(const Fixed& other);
	Fixed 	operator*(const Fixed& other);
	Fixed 	operator/(const Fixed& other);

	
	Fixed	operator++(int);
	Fixed&	operator++();
	Fixed	operator--(int);
	Fixed&	operator--();

	static Fixed&	max(Fixed& n1, Fixed& n2);
	static Fixed&	min(Fixed& n1, Fixed& n2);
	static const Fixed&	min(const Fixed& n1, const Fixed& n2);
	static const Fixed&	max(const Fixed& n1, const Fixed& n2);
};

std::ostream& operator<<(std::ostream & o, Fixed const & rhs);
