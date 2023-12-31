/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 23:05:48 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/14 14:53:03 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <map>
#include <iostream>
#include <fstream>
#include <string>

std::map<std::string, double>	fillMap( void );
void							printVal(std::map<std::string, double> myMap, std::string line);
short							parseIn( std::string line );
bool							dateCheck( std::string );
short							isValidNum(std::string &sNum);
