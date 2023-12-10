/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:56:10 by asidqi            #+#    #+#             */
/*   Updated: 2023/12/09 12:56:54 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::~PmergeMe() {}

void checkError(char const **av)
{
	double a;
	char *ch = NULL;

	for (int i = 0; av[i]; i++)
	{
		a = strtod(av[i], &ch);
		if (a < 0 || *ch != '\0')
		{
			throw("Error");
		}
	}
}

PmergeMe::PmergeMe(char const *av[])
{
	double a;
	char *ch = NULL;
	av = &av[1];
	try
	{
		checkError(av);
	}
	catch (const char *e)
	{
		std::cout << e << std::endl;
		// return (1);
	}
	std::cout << "Before: ";
	for (int i = 0; av[i]; i++)
	{
		a = strtod(av[i], &ch);
		std::cout << a << " ";
		uv.push_back(a);
		ul.push_back(a);
	}
	std::cout << std::endl;
}

void printlfl(const std::list<std::list<int> >& lfl)
{
    std::cout << "lfl:    ";
    for (std::list<std::list<int> >::const_iterator it = lfl.begin(); it != lfl.end(); ++it)
    {
        std::cout << "[";
        for (std::list<int>::const_iterator inner_it = it->begin(); inner_it != it->end(); ++inner_it)
        {
            std::cout << *inner_it;
            if (++inner_it != it->end())
                std::cout << ", ";
            --inner_it; // Reset the iterator position
        }

        std::cout << "]";
        if (++it != lfl.end())
            std::cout << ", ";
        --it; // Reset the iterator position
    }
    std::cout << std::endl;
}

void PmergeMe::printvfv(std::vector<std::vector < int > > vfv)
{
	std::cout << "vfv:    ";
	for (unsigned int j = 0; j < (vfv.size()); j++)
	{
		std::cout << "[";
		for (unsigned int i = 0; i < vfv[j].size(); i++)
		{
			std::cout << vfv[j][i];
			if (i + 1 != vfv[j].size())
				std::cout << ", ";
		}

		std::cout << "]";
	}
	std::cout << std::endl;
}
void PmergeMe::printlfl(std::list<std::list < int > > lfl)
{
	std::cout << "lfl:    ";
	std::cout << "{";
	for (std::list<std::list < int > >::iterator it = lfl.begin() ; it != lfl.end(); ++it)
	{
		std::cout << "[";
		for (std::list < int >::iterator itTwo = it->begin(); itTwo != it->end(); ++itTwo)
		{
			std::cout << *itTwo << " ";
			if ((std::next(itTwo)) != it->end())
				std::cout << ", ";
		}
		std::cout << "]";
	}
	std::cout << "}";
	std::cout << std::endl;
}

bool PmergeMe::checking(unsigned int dup)
{
	for (int i = 0; !vfv[i].empty(); i++)
		if ((vfv[0].size() == dup && vfv[1].size() == dup))
			if (vfv[2].size() == dup && vfv[3].size() == dup)
				return (1);
	return (0);
}
bool PmergeMe::checkingList(unsigned int dup)
{
	std::list<std::list < int > >::iterator it = lfl.begin();
	// std::list<std::list < int > >::iterator itTwo = ++lfl.begin();
	if (!it->empty())
	{
		if (it->size() == dup && (++it)->size() == dup)
			{
				// if (std::next(std::next(it))->size() == dup && std::next(std::next(std::next(it)))->size() == dup)
				// std::cout << " size lwla:" << it->size() <<" size tanya:" << std::next(it)->size() << "\n";
				// for (std::list<int >::iterator posit = it->begin() ; posit != it->end(); ++posit)
				// {
				// 	std::cout << *posit << " ";
				// }
				if ((++it)->size() == dup  && (++it)->size() == dup)
				{
					// std::cout << " size talta:" << it->size() <<" size rab3a:" << std::next(itTwo)->size() << "\n";
				return (1);
				}
			}
	}
	return (0);
}

bool compare(const std::vector<int> &a, const std::vector<int> &b)
{
	return (a.back() <= b.back());
}

bool compareL(const std::list<int> &a, const std::list<int> &b)
{
	return (a.back() <= b.back());
}

void PmergeMe::pairifyList()
{
	std::list<int> tmpL;
	if (x != 1)
		dup *= 2;

	// std::cout << "start rec :    " << x++ << ' ';
	// std::cout << "\nul befor:   ";
	x++;

	// for (std::list<int >::iterator it = ul.begin(); it != ul.end(); ++it)
	// {
	// 	std::cout << *it << " ";
	// }
	// std::cout << '\n';
	// making pairs
	// for (unsigned int j = 0; j < (ul.size());)
	// {
	// 	for (unsigned int i = 0; i < dup; i++)
	// 	{
	// 		if (j < ul.size())
	// 		{
	// 			tmpL.push_back(ul[j]);
	// 		}
	// 		else if (tmpL.size() != 0)
	// 			break;
	// 		j++;
	// 	}
	// 	vfv.push_back(tmpL);
	// 	// std::cout << vfv.back().back() << '\n';
	// 	tmpL.clear();
	// }
	for (std::list<int>::iterator it = ul.begin(); it != ul.end();)
	{
		for(unsigned int i = 0; i < dup; i++)
		{
			if(it != ul.end())
				tmpL.push_back(*it);
			else if (tmpL.size() != 0)
				break ;
			it++;
		}
		lfl.push_back(tmpL);
		tmpL.clear();
	}
	// print
	// printlfl(lfl);

	// 2 - sort
	for (std::list<std::list<int> >::iterator it = lfl.begin(); (it != --lfl.end()); /* std::advance(it, 2) */++it, ++it)
	{
		if (it->back() > std::next(it)->back())
			it->swap(*(std::next(it)));
		if (std::next(it) == --lfl.end() || std::next(std::next(it)) == --lfl.end())
			break ;
	}

	// printlfl(lfl);

	// /* check first and second ... third and fourth and so on until U find only one or none and break std::swap*/

	// 3 - copy back to ul
	ul.clear();
	for (std::list<std::list<int> >::iterator it = lfl.begin(); it != lfl.end(); ++it)
	{
		std::copy(it->begin(), it->end(), std::inserter(ul, ul.end()));
	}
	// std::cout << "ul after:   ";
	// for (std::list<int >::iterator it = ul.begin(); it != ul.end(); ++it)
	// {
	// 	std::cout << *it << " ";
	// }
	// std::cout << '\n';

	/*clear UV , push back everythin,  and then clear vfv*/
	if (checkingList(dup))
	{
		lfl.clear();
		pairifyList();
	}

	// ≈≈≈≈≈≈≈≈≈≈≈≈≈{***********************}≈≈≈≈≈≈≈≈≈≈≈≈≈≈

	// // clear vfv then make pair(same one)
	lfl.clear();
	for (std::list<int>::iterator it = ul.begin(); it != ul.end();)
	{
		for(unsigned int i = 0; i < dup; i++)
		{
			if(it != ul.end())
				tmpL.push_back(*it);
			else if (tmpL.size() != 0)
				break ;
			it++;
		}
		lfl.push_back(tmpL);
		tmpL.clear();
	}
	// std::cout << "≈≈≈≈≈≈≈≈≈≈≈≈≈{***********************}≈≈≈≈≈≈≈≈≈≈≈≈≈≈\n";
	// printlfl(lfl);
	// create mainchain(homa juj pairs lwlin) + pend // mainchain bha;l vfv f type // pend is std::vector<std::pair<std::vector<int>, iterator>)>
	if (lfl.back().size() != dup)
	{
		restL = lfl.back();
		lfl.pop_back();
	}
	// lflMain.reserve(uv.size());
	lflMain.clear();
	// pend.reserve(uv.size());
	pend.clear();
	lflMain.push_back(*lfl.begin());
	lflMain.push_back(*std::next(lfl.begin()));

	std::list<std::list<int> >::iterator trit = lfl.begin();
	std::advance(trit, 2);
	for (unsigned int i = 2; i < lfl.size(); ++i)
	{
		if (i % 2 == 0 && !trit->empty())
		{
			pPL.first = *trit;
			pPL.second = lflMain.end();
			if (/* !std::next(trit)->empty() */std::next(trit) != lfl.end() && !std::next(trit)->empty())
			{
				pPL.second = lflMain.insert(lflMain.end(), *std::next(trit));
				i++;
				++trit;
			}
			pendL.push_back(pPL);
			++trit;
		}
	}

	// std::cout << "Main: [";
	// printlfl(lflMain);

	// std::cout << "Pend:";
	// for (pendLT::iterator it = pendL.begin(); it != pendL.end(); ++it)
    // {
    //     std::list<int>::const_iterator listIt = it->first.begin();

    //     std::cout << "[";
    //     while (listIt != it->first.end())
    //     {
    //         std::cout << *listIt << " ";
    //         ++listIt;
    //     }
    //     std::cout << "]\n";
    // }

	// std::cout << "\nRest: [";
	// for (std::list<int>::iterator it = restL.begin(); it != restL.end(); ++it)
	// {
	// 	std::cout << *it << " ";
	// }
	// std::cout << "]\n";
	
	pendLT::iterator begin;
	pendLT::iterator end;
	int	idx;
	long int jacob[] ={2, 2, 6, 10, 22, 42, 86, 170, 342, 682, 1366, 2730, 5462, 10922, 21846, 43690, 87382, 174762, 349526, 699050, 1398102, 2796202, 5592406, 11184810,
						22369622, 44739242, 89478486, 178956970, 357913942, 715827882, 1431655766, 2863311530, 5726623062, 11453246122, 22906492246, 45812984490};
	idx = 0;
	// while (pendL.size())
	// {
	// 	end = pendL.begin();
	// 	begin = pendL.begin();
	// 	for (int i = 0; i < jacob[idx] - 1 && begin != pendL.end(); ++i)
	// 		++begin;
	// 	if (begin == pendL.end())
	// 		--begin;
	// 	while (true)
	// 	{
	// 		losit = std::lower_bound(lflMain.begin(), begin->second, begin->first, compare);
	// 		losit = lflMain.insert(losit, begin->first);
	// 		pendL.erase(begin);
	// 		for (pendLT::iterator itTwo = pendL.begin(); itTwo != pendL.end(); ++itTwo)
	// 			if (itTwo->second >= losit) 
	// 				++itTwo->second;
	// 		if (begin == end)
	// 			break ;
	// 		--begin;
	// 	}
	// 	++idx;
	// }
	while (pendL.size())
	{
		end = pendL.begin();
		begin = pendL.begin();
		for (int i = 0; i < jacob[idx] - 1 && begin != pendL.end(); ++i)
			++begin;
		if (begin == pendL.end())
			--begin;

		while (true)
		{
			long distance = std::distance(lflMain.begin(), begin->second);

			losit = std::lower_bound(lflMain.begin(), lflMain.end(), begin->first, compareL);
			losit = lflMain.insert(losit, begin->first);
			pendL.erase(begin);

			for (pendLT::iterator itTwo = pendL.begin(); itTwo != pendL.end(); ++itTwo)
				if (std::distance(lflMain.begin(), itTwo->second) >= distance)
					++itTwo->second;

			if (begin == end)
				break;

			--begin;
		}
		++idx;
	}
	if (!restL.empty())
	{
		lflMain.push_back(restL);
		restL.clear();
	}

	// //
	// copy to uv(same one)
	ul.clear();
	for (std::list<std::list<int> >::iterator it = lflMain.begin(); it != lflMain.end(); ++it)
	{
		std::copy(it->begin(), it->end(), std::inserter(ul, ul.end()));
	}
	lflMain.clear();
	pendL.clear();
	// std::cout << "returned ul: {";
	// for (std::list<int >::iterator it = ul.begin(); it != ul.end(); ++it)
	// {
	// 	std::cout << *it << " ";
	// }
	// std::cout << "}\n";
	dup /= 2;
}

void PmergeMe::start(short n)
{
	x = 1;
	dup = 1;
	if (n == 1)
		pairify();
	else 
		pairifyList();
		// merge_insertion_sort(ul);
	// std::cout << "{ ";
	// for (unsigned int u = 0; u < uv.size(); u++)
	// {
	// 	std::cout << uv[u] << " ";
	// }
	// std::cout << " }";
	// std::cout << std::endl;
}


void PmergeMe::pairify()
{
	std::vector<int> tmp;
	if (x != 1)
		dup *= 2;

	// std::cout << "\nuv befor:   ";
	// for (unsigned int u = 0; u < uv.size(); u++)
	// {
	// 	std::cout << uv[u] << " ";
	// }
	// std::cout << '\n';

	// making pairs
	x++;
	// std::cout << "start rec :    " << x++ << ' ' << '\n';
	for (unsigned int j = 0; j < (uv.size());)
	{
		for (unsigned int i = 0; i < dup; i++)
		{
			if (j < uv.size())
			{
				tmp.push_back(uv[j]);
			}
			else if (tmp.size() != 0)
				break;
			j++;
		}
		vfv.push_back(tmp);
		// std::cout << vfv.back().back() << '\n';
		tmp.clear();
	}

	// print
	// printvfv(vfv);

	// 2 - sort
	for (int o = 0; (!vfv[o].empty() && !vfv[o + 1].empty()); o += 2)
	{
		if (vfv[o].back() > vfv[o + 1].back())
			std::swap(vfv[o], vfv[o + 1]);
	}

	/* check first and second ... third and fourth and so on until U find only one or none and break std::swap*/

	// 3 - copy back to uv
	uv.clear();
	for (unsigned int i = 0; i < vfv.size(); i++)
	{
		std::copy(vfv[i].begin(), vfv[i].end(), std::inserter(uv, uv.end()));
	}
	// std::cout << "uv after:   ";
	// for (unsigned int u = 0; u < uv.size(); u++)
	// {
	// 	std::cout << uv[u] << " ";
	// }
	// std::cout << '\n';

	/*clear UV , push back everythin,  and then clear vfv*/
	if (checking(dup))
	{
		vfv.clear();
		pairify();
	}

	// ≈≈≈≈≈≈≈≈≈≈≈≈≈{***********************}≈≈≈≈≈≈≈≈≈≈≈≈≈≈

	// clear vfv then make pair(same one)
	vfv.clear();
	for (unsigned int j = 0; j < (uv.size());)
	{
		for (unsigned int i = 0; i < dup; i++)
		{
			if (j < uv.size())
			{
				tmp.push_back(uv[j]);
			}
			else if (tmp.size() != 0)
				break;
			j++;
		}
		vfv.push_back(tmp);
		// std::cout << vfv.back().back() << '\n';
		tmp.clear();
	}
	// std::cout << "≈≈≈≈≈≈≈≈≈≈≈≈≈{***********************}≈≈≈≈≈≈≈≈≈≈≈≈≈≈\n";
	// printvfv(vfv);
	// create mainchain(homa juj pairs lwlin) + pend // mainchain bha;l vfv f type // pend is std::vector<std::pair<std::vector<int>, iterator>)>
	if (vfv.back().size() != dup)
	{
		rest = vfv.back();
		vfv.pop_back();
	}
	vfvMain.reserve(uv.size());
	vfvMain.clear();
	pend.reserve(uv.size());
	pend.clear();
	vfvMain.push_back(vfv[0]);
	vfvMain.push_back(vfv[1]);
	for (unsigned int i = 2; i < vfv.size(); i++)
	{
		if (i % 2 == 0 && !vfv[i].empty())
		{
			pP.first = vfv[i];
			pP.second = vfvMain.end();
			if (!vfv[i + 1].empty())
			{
				pP.second = vfvMain.insert(vfvMain.end(), vfv[i + 1]);
				i++;
			}
			pend.push_back(pP);
		}
	}

	pendT::iterator begin;
	pendT::iterator end;
	int	idx;
	long int jacob[] ={2, 2, 6, 10, 22, 42, 86, 170, 342, 682, 1366, 2730, 5462, 10922, 21846, 43690, 87382, 174762, 349526, 699050, 1398102, 2796202, 5592406, 11184810,
						22369622, 44739242, 89478486, 178956970, 357913942, 715827882, 1431655766, 2863311530, 5726623062, 11453246122, 22906492246, 45812984490};
	idx = 0;
	while (pend.size())
	{
		end = pend.begin();
		begin = pend.begin();
		for (int i = 0; i < jacob[idx] - 1 && begin != pend.end(); ++i)
			++begin;
		if (begin == pend.end())
			--begin;
		while (true)
		{
			posit = std::lower_bound(vfvMain.begin(), begin->second, begin->first, compare);
			posit = vfvMain.insert(posit, begin->first);
			pend.erase(begin);
			for (pendT::iterator itTwo = pend.begin(); itTwo != pend.end(); ++itTwo)
				if (itTwo->second >= posit) 
					++itTwo->second;
			if (begin == end)
				break ;
			--begin;
		}
		++idx;
	}
	if (!rest.empty())
	{
		vfvMain.push_back(rest);
		rest.clear();
	}

	//
	// copy to uv(same one)
	//
	uv.clear();
	for (unsigned int i = 0; i < vfvMain.size(); i++)
	{
		std::copy(vfvMain[i].begin(), vfvMain[i].end(), std::inserter(uv, uv.end()));
	}
	vfvMain.clear();
	pend.clear();
	dup /= 2;
}