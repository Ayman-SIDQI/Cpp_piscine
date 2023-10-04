/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:12:01 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/04 19:23:51 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

// forward declaration
class ICharacter;

class AMateria
{
protected:
	std::string type;
public:
	// AMateria(std::string const & type);
	AMateria();
	AMateria(AMateria const & other);
	AMateria& operator=(AMateria const & other);
	virtual	~AMateria();
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* 	clone() const = 0;
	virtual void 		use(ICharacter& target);
};