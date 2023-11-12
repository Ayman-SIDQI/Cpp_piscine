/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:41:32 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/31 15:48:19 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main ()
{
	char strign[5] = { 'a', 'y', 'm', 'a', 'n'};
	int nums[5] = { 1, 2, 3, 4, 5};
	float floats[5] = { 1.01, 2.11, 3.21, 4.3, 5.4};
	iter<char>(strign, 2, print<char>);
	iter<int>(nums, 2, print<int>);
	iter<float>(floats, 2, print<float>);
	return (0);
}

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print( T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main()
// {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter( tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }