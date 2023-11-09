/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:01:31 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/09 22:16:19 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0)
{
	std::cout << "Span default constructed." << std::endl;
}

Span::Span(int N) : _N(N)
{
	std::cout << "Span constructed." << std::endl;
}

Span::Span(const Span &other)
{
	std::copy(other._lst.begin(), other._lst.end(), std::back_inserter(_lst));
	std::cout << "Span copy constructed." << std::endl;
}

Span::~Span()
{
	std::cout << "Destructor." << std::endl;
}

Span const &Span::operator=(const Span &other)
{
	if (this == &other)
		return (*this);
	std::copy(other._lst.begin(), other._lst.end(), std::back_inserter(_lst));
	return(*this);
}

void	Span::addNumber(std::list<unsigned int>::iterator b, std::list<unsigned int>::iterator e)
{
	if (_lst.size() + std::distance(b, e) < _N)
	{
		_lst.insert(_lst.end(), b, e);
	}
	else
		throw std::range_error("List limit exceeded!");
}

void	Span::addNumber(int n)
{
	if (_lst.size() < _N)
		_lst.push_back(n);
	else
		throw std::range_error("List limit exceeded!");
}

int	Span::shortestSpan( void )
{
	std::list<unsigned int>::iterator 	it;
	std::list<unsigned int>::iterator 	next_it;
	unsigned int 						span;

	if (_lst.size() <= 1)
		throw std::range_error("Cannot find span since list is smol smartass!");
	_lst.sort();
	for (it = _lst.begin(), next_it = _lst.begin(), next_it++, span = 4294967295; (next_it != _lst.end()); ++it, ++next_it)
	{
		if (span > (*next_it - *it))
			span = *next_it - *it;
	}
	return (span);
}

int	Span::longestSpan( void )
{
	std::list<unsigned int>::iterator 	it;
	std::list<unsigned int>::iterator 	next_it;

	if (_lst.size() <= 1)
		throw std::range_error("Cannot find span since list is smol smartass!");
	_lst.sort();
	it = _lst.begin();
	next_it = _lst.end();
	next_it--;
	
	return (*next_it - *it);
}

// std::list<unsigned int> Span::getList() const
// {
// 	return (&_lst);
// }


// std::ostream& operator<<( std::ostream& os, const Span& span ) {
//     for ( std::list<int>::const_iterator it = Span.getList()->begin(); it != span.getList()->end(); ++it )
//         os << *it << " ";
//     return os;
// }