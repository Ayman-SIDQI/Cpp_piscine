/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:44:18 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/23 17:56:37 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Data
{
private:
    std::string _content;
public:
    Data();
    Data(Data const &);
    Data &operator=(Data const &);
    ~Data();
};