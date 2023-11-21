/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:37:14 by asidqi            #+#    #+#             */
/*   Updated: 2023/11/17 18:14:12 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

short	isValidNum(std::string const &sNum)
{
	for (int i = 0; sNum[i]; i++)
	{
		if (!isnumber(sNum[i]))
			return (1);
	}
	return (0);
}

void	calculate(std::stack<int> &sNum, const char *op)
{
	if (!sNum.empty())
	{
		
		int 	rv = sNum.top();
		// if (sNum.size() > 1)
		// 	return ;
		if (!sNum.empty())
			sNum.pop();
		int 	lv = sNum.top();
		if (!sNum.empty())
			sNum.pop();
		switch (op[0])
		{
		case '+':
			sNum.push((lv + rv));
			break;
		case '-':
			sNum.push((lv - rv));
			break;
		case '/':
			sNum.push((lv / rv));
			break;
		case '*':
			sNum.push((lv * rv));
			break;
		default:
			break;
		}
	}
}