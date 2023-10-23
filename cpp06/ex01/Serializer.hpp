/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:30:11 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/23 17:32:15 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include "Data.hpp"

class Serializer
{
private:
    Serializer();
    ~Serializer();
    Serializer(Serializer const &);
    Serializer &operator=(Serializer const &);
public:
    static uintptr_t    serialize(Data* ptr);
    static Data         *deserialize(uintptr_t raw);
};

