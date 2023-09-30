/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:29:18 by asidqi            #+#    #+#             */
/*   Updated: 2023/09/27 15:04:12 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
protected:
	std::string type;
public:
	Ice();
	Ice(Ice const & src);
	~Ice();
	Ice&	operator=(Ice const &other);

	Ice*	clone() const;
	void	use(ICharacter& target);
};
