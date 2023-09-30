/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:32:40 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/28 22:52:21 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria 	*_inventory[4];
public:
	Character(std::string const & name);
	Character();
	Character(Character& other);
	Character&	operator=(Character& other);
	~Character();
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

												AMateria	*getMateria(int idx);

	static	int			_inventory_size; // to Keep track of the current size of _unequiped_inv
	static	AMateria 	**_unequiped_inv;
};