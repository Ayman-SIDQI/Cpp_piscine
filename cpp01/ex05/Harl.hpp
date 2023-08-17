/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 21:18:42 by asidqi            #+#    #+#             */
/*   Updated: 2023/08/13 11:52:11 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<string>

class Harl
{
public:
	void complain( std::string level );

private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );


	
};