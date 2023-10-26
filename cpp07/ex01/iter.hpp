/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:42:24 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/26 12:38:55 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


template <typename T>
void    iter( const T arr[], int len,  void (*p)(const T&))
{
    for (int i = 0; i < len; i++)
    {
        p(arr[i]);
    }
}

template <typename T>
void    iter( T arr[], int len,  void (*p)(T&))
{
    for (int i = 0; i < len; i++)
    {
        p(arr[i]);
    }
}