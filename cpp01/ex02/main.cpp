/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:21:09 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/11 10:21:09 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

int main ()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringPtr = &str;
	std::string&	stringRef = str;

	std::cout << &str << std::endl;
	std::cout << stringPtr << std::endl;
	std::cout << &stringRef << std::endl;

	std::cout << str << std::endl;
	std::cout << *stringPtr << std::endl;
	std::cout << stringRef << std::endl;

	return (0);
}