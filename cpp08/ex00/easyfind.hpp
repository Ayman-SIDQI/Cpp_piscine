/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:51:21 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/03 18:25:41 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
void easyfind(T &hay, int needle)
{
    typename T::const_iterator it = std::find(hay.begin(), hay.end(), needle);

    if (it != hay.end())
        std::cout << *it << " is found!" << std::endl;
    else
        throw (std::range_error("No buenos, can't find it!"));
}