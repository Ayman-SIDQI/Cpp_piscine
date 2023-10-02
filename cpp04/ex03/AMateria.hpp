/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:12:01 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/02 18:46:51 by asidqi           ###   ########.fr       */
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
	AMateria(std::string const & type);
	AMateria();
	AMateria(AMateria& other);
	AMateria& operator=(AMateria& other);
	virtual	~AMateria();
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* 	clone() const = 0;
	virtual void 		use(ICharacter& target);
};