/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:57:41 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/28 21:52:40 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_Materia_arr[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource& other);
	~MateriaSource();
	MateriaSource& operator=(MateriaSource& other);
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};