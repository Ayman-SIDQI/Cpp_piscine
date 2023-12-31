/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:57:41 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/04 19:21:31 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_Materia_arr[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const & other);
	~MateriaSource();
	MateriaSource& operator=(MateriaSource const & other);
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};