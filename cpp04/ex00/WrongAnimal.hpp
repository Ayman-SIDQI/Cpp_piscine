/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:20:20 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/04 19:16:15 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	virtual	~WrongAnimal();
	// WrongAnimal(std::string Name);
	WrongAnimal(WrongAnimal const & other);
	WrongAnimal&	operator=(WrongAnimal const & other);
	void	makeSound()		const;
	std::string		getType()	const;
};