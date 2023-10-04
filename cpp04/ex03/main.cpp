/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:27:47 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/04 10:53:34 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

					// int main()
					// {
					// 	IMateriaSource* src = new MateriaSource();
					// 	src->learnMateria(new Ice());
					// 	src->learnMateria(new Cure());
					// 	ICharacter* me = new Character("me");
					// 	AMateria* tmp;
					// 	tmp = src->createMateria("ice");
					// 	me->equip(tmp);
					// 	tmp = src->createMateria("cure");
					// 	me->equip(tmp);
					// 	ICharacter* bob = new Character("bob");
					// 	me->use(0, *bob);
					// 	me->use(1, *bob);
					// 	delete bob;
					// 	delete me;
					// 	delete src;
					// 	system("leaks Materia");
					// 	return (0);
					// }

					// int main()
					// {
					// 	ft_tests();
					// 	// Leaks check
					// 	std::cout << "LEAKS:" << std::endl;
					// 	std::cout << "-----------------------" << std::endl;
					// 	system("leaks Materia");
					// 	return	(0);
					// }

// void	test()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
	
// 	// ICharacter* me = new Character("me");
	
// 	// AMateria* tmp;
// 	// tmp = src->createMateria("ice");
// 	// me->equip(tmp);
// 	// tmp = src->createMateria("cure");
// 	// me->equip(tmp);
	
// 	// ICharacter* bob = new Character("bob");
// 	// std::cout << std::endl << "-----------------------" << std::endl;
	
// 	// me->use(0, *bob);
// 	// me->use(1, *bob);
// 	// std::cout << std::endl << "-----------------------" << std::endl;
	
// 	// delete bob;
// 	// delete me;
// 	delete src;
// }

// int main()
// {
// 	test();
// 	std::cout << std::endl << "-----------------------" << std::endl;
// 	system("leaks -q Materia");
// 	std::cout << std::endl << "-----------------------" << std::endl;
	
// 	return	0;
// }

void	test1()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;	
}

void	test2()
{
	Character *c = new Character;
	Character *c2 = new Character;
	Ice *ice = new Ice;
	Ice *a = new Ice;
	Ice *b = new Ice;
	Ice *d = new Ice;
	
	c->equip(ice);
	c->equip(ice);
	c->equip(ice);
	c->equip(ice);
	c->equip(a);
	c->equip(b);
	c->equip(d);
	c->equip(ice);
	c->unequip(0);
	c->unequip(1);
	c->unequip(2);
	c->unequip(3);
	c->unequip(4);
	c->unequip(5);
	c = c2;
	delete c;
	delete a;
	delete b;
	delete d;
	delete ice;
	std::cout << "HAHAHAHAH ADRESS:	" << c << std::endl;
	// delete c2;
}

void	test3()
{
	Character c;
	Character c2(c);
	c2.equip(new Ice);
	c2 = c;
}

void	test4()
{
	Character *c = new Character();
	Cure *cure = new Cure();

	c->equip(cure);
	c->unequip(0);

	delete c;
}

void	test5()
{
	AMateria *a = NULL;
	Character *c = new Character;

	c->equip(a);
	c->equip(a);
	c->equip(a);
	c->equip(a);
	c->unequip(0);
	c->unequip(1);
	c->unequip(2);
	c->unequip(3);
	c->unequip(4);
	c->equip(a);
	delete c;
}


void	test6()
{
	Character a("a");
	a.equip(new Cure());
	a.equip(new Ice());
	a.equip(new Cure());
	a.equip(new Ice());
	
	a.use(0, a);
	a.use(1, a);
	a.use(2, a);
	a.use(3, a);
	
	Character b("b");

	b = a;

	b.use(0, b);
	b.use(1, b);
	b.use(2, b);
	b.use(3, b);
}

void test7()
{
	Character a("a");
	
	a.equip(new Cure());
	a.equip(new Ice());
	a.equip(new Cure());
	a.equip(new Ice());
	
	a.use(0, a);
	a.use(1, a);
	a.use(2, a);
	a.use(3, a);
	
	Character b("b");
	b.equip(new Cure());
	b.equip(new Ice());

	a = b;

	b.use(0, b);
	b.use(1, b);
}

void	test8()
{
    ICharacter *i = new Character("bob");
    
    i->equip(new Cure());
    i->equip(new Ice());
    i->equip(new Cure());
    i->equip(new Ice());
    
    i->unequip(1);
    i->use(1, *i);
    
    i->unequip(0);
	delete i;
}

void	test9()
{
	Character a("a");
	a.equip(new Cure());
	a.equip(new Ice());
	a.equip(new Cure());
	a.equip(new Ice());
	
	a.use(0, a);
	a.use(1, a);
	a.use(2, a);
	a.use(3, a);
	
	Character b("b");

	b = a;

	b.use(0, b);
	b.use(1, b);
	b.use(2, b);
	b.use(3, b);
}

int main()
{
	// Character a("alpha");
	// Character b(a);
	
	// a.equip(new Cure());
	// a.equip(new Cure());
	// a.equip(new Cure());
	// a.equip(new Cure());
	// a.equip(new Cure());
	// a.unequip(0);
	// a.unequip(1);
	// a.unequip(2);
	// a.unequip(3);
	// a.unequip(4);







	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	// std::cout << "--------- test 1 ----------" << std::endl;
	// test1();
	// std::cout << "--------- test 2 ----------" << std::endl;
	// test2();
	// std::cout << "--------- test 3 ----------" << std::endl;
	// test3();
	// std::cout << "--------- test 4 ----------" << std::endl;
	// test4();
	// std::cout << "--------- test 5 ----------" << std::endl;
	// test5();
	// std::cout << "--------- test 6 ----------" << std::endl;
	// test6();
	// std::cout << "--------- test 7 ----------" << std::endl;
	// test7();
	// std::cout << "--------- test 8 ----------" << std::endl;
	// test8();
	// std::cout << "--------- test 9 ----------" << std::endl;
	// test9();
	// std::cout << "--------- test LEAKS ----------" << std::endl;

	// system("leaks -q Materia");
	return 0;
}