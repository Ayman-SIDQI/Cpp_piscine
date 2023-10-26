/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:52:51 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/26 11:31:49 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T &min(T &a, T&b)
{
	return (a < b ? a : b);
}

template <typename T>
T &max(T &a, T&b)
{
	return (a > b ? a : b);
}
