/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:19:59 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/11 10:20:00 by asidqi           ###   ########.fr       */
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
	void	setHorde(Zombie *horde, std::string name);
	// void 	getHorde()const;
	Zombie();
	Zombie(std::string name);
	Zombie(std::string name, bool test);
	~Zombie();
};
Zombie* zombieHorde( int N, std::string name );
Zombie* newZombie(std::string name);

#endif
