/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:01:47 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/10 18:19:32 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <list>

class Span 
{
private:
	std::list<unsigned int> _lst;
	unsigned int			_N;
public:
	Span();
	Span(int N);
	Span(const Span &);
	~Span();
	Span const	&operator=(const Span &);
	void		addNumber(int n);
	void		addNumber(std::list<unsigned int>::iterator beg, std::list<unsigned int>::iterator en/* , unsigned int size */);
	int			shortestSpan( void );
	int			longestSpan( void );

	
};
