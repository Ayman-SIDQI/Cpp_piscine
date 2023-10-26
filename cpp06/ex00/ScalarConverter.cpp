/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:22:24 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/25 19:52:44 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(ScalarConverter const &){}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &)
{
    return (*this);
}

ScalarConverter::~ScalarConverter()
{}

double ScalarConverter::detectError(std::string const t)
{
    const char* tc = t.c_str();
    char*   end;
    double  res;
    if (t.length() == 1 && isprint(t[0]))
        return (res = strtod(tc, &end));
    res = strtod(tc, &end);
    if (*end != '\0' && *end != 'f')
        throw std::runtime_error("");
    return (res);
}

void    charCase(double r)
{
    if (!isprint(r))
        std::cout << "char: " << "Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(r) << "'" << std::endl;
}

int retlen(double r, int len)
{
    return ((len - r - 1));
}

void    intCase(double r)
{
    if (r < std::numeric_limits<int>::min() || r > std::numeric_limits<int>::max())
        std::cout << "int: " << "impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(r) << std::endl;
}

void    floatCase(double r, int len)
{
    std::stringstream ss;
    ss << r;
    std::string str = ss.str();

    if (len > 9)
        std::cout << "float: " << std::fixed <<std::scientific <<std::setprecision(4) << static_cast<float>(r) << 'f' << std::endl;
    else
        std::cout << "float: " << std::fixed 
        << ( (str.find('.') == std::string::npos) ? std::setprecision(1) : std::setprecision(retlen(std::to_string(r).find('.'), len))) << static_cast<float>(r) << 'f' << std::endl;
}

void    doubleCase(double r, int len)
{
    std::stringstream ss;
    ss << r;
    std::string str = ss.str();

    if (len > 17)
        std::cout << "double: " << std::fixed << std::scientific << std::setprecision(4) << static_cast<double>(r) << std::endl;
    else
        std::cout << "double: " << std::fixed 
        << ( (str.find('.') == std::string::npos) ? std::setprecision(1) : std::setprecision(retlen(std::to_string(r).find('.'), len))) << static_cast<double>(r) << std::endl;

}


void printValue(double r, int len)
{
    charCase(r);
    intCase(r);
    floatCase(r, len);
    doubleCase(r, len);
}

void ScalarConverter::convert(std::string const &t)
{
    try
    {
        double      res;

        std::string str;
        res = ScalarConverter::detectError(t);
        printValue(res, t.length());
        
    }
    catch(const std::exception& e)
    {
        std::cout << "char: impossible" << std::endl 
        << "int: impossible" << std::endl
        << "float: nanf" << std::endl
        << "double: nan" << std::endl;
    }
}
