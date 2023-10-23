/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:44:22 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/23 17:55:53 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _content("Basic info")
{
}

Data::Data(Data const &other)
{
    *this = other;
}

Data &Data::operator=(Data const &other)
{
    _content = other._content;
    return (*this);
}

Data::~Data()
{
}
