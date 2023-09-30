/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:04:10 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/27 15:04:34 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
protected:
	std::string type;
public:
	Cure();
	Cure(Cure const & src);
	~Cure();
	Cure&	operator=(Cure const &other);

	Cure*	clone() const;
	void	use(ICharacter& target);
};