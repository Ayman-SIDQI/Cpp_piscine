/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:52:22 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/09 15:54:58 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template < typename T >
class Array
{
private:
    T       *_arr;
    unsigned int     _size;
public:
    Array(Array const &other) : _arr(new T[other._size]), _size(other._size)
    {
        for (unsigned int i = 0; i < _size; i++)
            _arr[i] = other._arr[i];
    }
    Array() : _arr(new T[0]), _size(0){}
    Array(unsigned int n) : _arr(new T[n]), _size(n){}
    ~Array(){delete []_arr;}
    
    
    Array const &operator=(Array const &other)
    {
        if (this == &other)
            return (*this);
        _arr = new T[other._size];
        for(int unsigned i = 0; i < other._size; i++)
            _arr[i] = other._arr[i];
    }

    int size( void )const{return (_size);};
    
    T &operator[](unsigned int i)
    {
        if (i >= _size || i < 0)
            throw (std::range_error("Invalid range bro!"));
        return (_arr[i]);
    }
};
