/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:30:57 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/11 10:30:57 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<string>

class Weapon 
{

private:
	std::string		type;

public:

	Weapon();
	Weapon(std::string newType);
	~Weapon();
	const std::string& getType() const;
	void	setType(std::string newType);
};