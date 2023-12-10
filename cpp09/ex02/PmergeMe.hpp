/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:56:14 by asidqi            #+#    #+#             */
/*   Updated: 2023/12/09 13:06:44 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <vector>
#include <utility>
#include <list>
#include <ctime>
#include <iomanip>

typedef std::list<std::pair<std::list<int>, std::list<std::list<int> >::iterator > > pendLT;
typedef std::vector<std::pair<std::vector<int>, std::vector<std::vector<int> >::iterator > > pendT;
class PmergeMe
{
private:
	int x;
	const PmergeMe& operator=(const PmergeMe&);
	PmergeMe(const PmergeMe&);
public:

	std::list<int>		ul;
	std::vector<int>	uv;
	unsigned int		dup;
	std::vector<int>	rest;
	std::list<int>	restL;
	std::list<std::list < int > >	lfl;
	std::list<std::list < int > >	lflMain;
	std::vector<std::vector < int > >	vfv;
	std::vector<std::vector < int > >	vfvMain;
	std::pair<std::vector<int>, std::vector<std::vector<int> >::iterator >	pP;
	std::pair<std::list<int>, std::list<std::list<int> >::iterator >	pPL;
	std::vector<std::vector<int> >::iterator	it;
	pendT	pend;
	pendLT	pendL;
	std::vector<std::vector < int > >::iterator	posit;
	std::list<std::list < int > >::iterator	losit;

	

	void printlfl(std::list<std::list < int > > );
	void pairifyList();
	void start(short n);
	bool checkingList(unsigned int dup);
	bool checking(unsigned int dup);
	void printvfv(std::vector<std::vector < int > > vfv);
	void pairify();
	PmergeMe();
	~PmergeMe();
	PmergeMe(char const *av[]);
	std::list<int> merge_insertion_sort(std::list<int> arr);
	std::list<int> mergez(std::list<int> left, std::list<int> right);
	std::vector<std::pair < int, int > > puv;
};
