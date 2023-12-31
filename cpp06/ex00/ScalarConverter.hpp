/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:22:23 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/25 19:51:14 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <sstream>

class ScalarConverter 
{
private:
    ScalarConverter();
    ScalarConverter(ScalarConverter const &);
    ScalarConverter &operator=(ScalarConverter const &);
    ~ScalarConverter();
public:
    static void     convert(std::string const &);
    static double   detectError(std::string const t);
};