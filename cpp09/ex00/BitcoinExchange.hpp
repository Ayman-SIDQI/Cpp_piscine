/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 23:05:48 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/12 22:51:21 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <map>
#include <iostream>
#include <fstream>
#include <string>

std::map<std::string, double>	fillMap( void );
bool							dateCheck( std::string );