/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:56:14 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/19 22:49:31 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include <ctime>
#include <iomanip>

std::vector<int> mergez(std::vector<int> left, std::vector<int> right);
std::vector<int> merge_insertion_sort(std::vector<int> arr);
std::list<int> merge_insertion_sort(std::list<int> arr);
std::list<int> mergez(std::list<int> left, std::list<int> right);
