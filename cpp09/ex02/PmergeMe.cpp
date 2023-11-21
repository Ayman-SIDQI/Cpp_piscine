/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:56:10 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/20 20:46:02 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::list<int> merge_insertion_sort(std::list<int> arr)
{
	if (arr.size() <= 1)
		return arr;

	std::list<int> left;
	std::list<int> right;
	std::list<int>::iterator middle = arr.begin();
	std::advance(middle, arr.size() / 2);

	left.splice(left.end(), arr, arr.begin(), middle);
	right.splice(right.end(), arr, middle, arr.end());

	if ((merge_insertion_sort(left).size() == 1 &&  merge_insertion_sort(right).size() == 1) && (merge_insertion_sort(left) > merge_insertion_sort(right)))
	{
		std::list<int> sorted = mergez(merge_insertion_sort(left), merge_insertion_sort(right));
		return (sorted);
	}
	else
	{
		std::list<int> sorted = mergez(merge_insertion_sort(right), merge_insertion_sort(left));
		return (sorted);
	}
}

std::list<int> mergez(std::list<int> left, std::list<int> right)
{
	std::list<int> merged;
	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			merged.push_back(left.front());
			left.pop_front();
		}
		else
		{
			merged.push_back(right.front());
			right.pop_front();
		}
	}
	while (!left.empty())
	{
		merged.push_back(left.front());
		left.pop_front();
	}
	while (!right.empty())
	{
		merged.push_back(right.front());
		right.pop_front();
	}
	return merged;
}

std::vector<int> merge_insertion_sort(std::vector<int> arr)
{
	if (arr.size() <= 1)
		return arr;
	std::vector<int> left(arr.begin(), arr.begin() + arr.size() / 2);
	std::vector<int> right(arr.begin() + arr.size() / 2, arr.end());
	if ((merge_insertion_sort(left).size() == 1 &&  merge_insertion_sort(right).size() == 1) && (merge_insertion_sort(left) > merge_insertion_sort(right)))
	{
		std::vector<int> sorted = mergez(merge_insertion_sort(left), merge_insertion_sort(right));
		return (sorted);
	}
	else
	{
		std::vector<int> sorted = mergez(merge_insertion_sort(right), merge_insertion_sort(left));
		return (sorted);
	}
}

std::vector<int> mergez(std::vector<int> left, std::vector<int> right)
{
	std::vector<int> merged;
	while (!left.empty() && !right.empty())
	{
		if (left[0] <= right[0])
		{
			merged.push_back(left[0]);
			left.erase(left.begin());
		}
		else
		{
			merged.push_back(right[0]);
			right.erase(right.begin());
		}
	}
	while (!left.empty())
	{
		merged.push_back(left[0]);
		left.erase(left.begin());
	}
	while (!right.empty())
	{
		merged.push_back(right[0]);
		right.erase(right.begin());
	}
	return merged;
}
