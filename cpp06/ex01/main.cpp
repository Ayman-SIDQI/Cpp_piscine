/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:43:14 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/23 17:37:38 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data* ptr = new Data();
    Serializer::serialize(ptr);
    uintptr_t ptr_as_uint = reinterpret_cast<uintptr_t>(ptr);
    // std::cout << ptr_as_uint << std::endl << &ptr << std::endl;
    // std::cout << ptr_as_uint << std::endl << reinterpret_cast<uintptr_t>(ptr) << std::endl;
    std::cout << ptr << std::endl << Serializer::serialize(ptr) << std::endl
    << Serializer::deserialize(ptr_as_uint) << std::endl ;
    return 0;
}
