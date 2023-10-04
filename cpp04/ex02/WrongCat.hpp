/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:07:58 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/04 19:14:50 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"
#include "Cat.hpp"


class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	virtual	~WrongCat();
	// WrongCat(std::string Type);
	WrongCat(WrongCat const &other);
	WrongCat&       operator=(WrongCat const & other);

	void	makeSound()	const;
};