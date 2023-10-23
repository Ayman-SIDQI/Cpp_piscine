/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:58:11 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/23 22:17:41 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
public:
	virtual ~Base();
};

Base::~Base()
{
	std::cout << "Base Destructed!" << std::endl;
}

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base *generate(void)
{
	Base *ptr = NULL;
	std::srand(std::time(NULL));
	short randomNum = (std::rand() % 3);
	if (randomNum == 0)
		ptr = new A;
	else if (randomNum == 1)
		ptr = new B;
	else if (randomNum == 2)
		ptr = new C;
	return (ptr);
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
	{
		std::cout << "This object is of A class!" << std::endl;
		return ;
	}
	if (dynamic_cast<B *>(p))
	{
		std::cout << "This object is of B class!" << std::endl;
		return ;
	}
	if (dynamic_cast<C *>(p))
	{
		std::cout << "This object is of C class!" << std::endl;
		return ;
	}
	std::cout << "This object is of none of the derived classes!" << std::endl;
	
}

void identify( Base& p )
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "This object is of A class!" << std::endl;
		(void)a;
	}
	catch(const std::exception& e)
	{
		try
		{
			B &b = dynamic_cast<B &>(p);
			std::cout << "This object is of B class!" << std::endl;
			(void)b;
		}
		catch(const std::exception& e)
		{
			try
			{
				C &c = dynamic_cast<C &>(p);
				std::cout << "This object is of C class!" << std::endl;
				(void)c;
			}
			catch(const std::exception& e)
			{
				std::cout << "This object is of none of the derived classes!" << std::endl;
			}
		}
	}
}

int main(void)
{
	Base *ptr;
	Base *rptr = new A();
	
	ptr = generate();
	identify(ptr);
	identify(rptr);
	delete ptr;
	return 0;
}
