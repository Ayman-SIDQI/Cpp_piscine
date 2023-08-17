/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:19:53 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/11 10:19:53 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;

public:
	void	announce(void) const;
	Zombie(std::string name);
	Zombie(std::string name, bool test);
	~Zombie();
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
