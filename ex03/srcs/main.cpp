/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:06:35 by mriant            #+#    #+#             */
/*   Updated: 2022/12/05 13:00:16 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "colors.h"

int main()
{
	AMateria *groundMaterias[2];
	AMateria *tmp;

	std::cout << BCYN << "=== Create Materia Source ===" << RES << std::endl;
	IMateriaSource *src = new MateriaSource();

	std::cout << std::endl
			  << BCYN << "=== Learn Ice and Cure ===" << RES << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	tmp = new Ice();
	src->learnMateria(tmp);
	delete tmp;

	std::cout << std::endl
			  << BCYN << "=== Create Character me ===" << RES << std::endl;
	ICharacter *me = new Character("me");

	std::cout << std::endl
			  << BCYN << "=== Create and equip Ice and Cure materias ==="
			  << RES << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << std::endl
			  << BCYN << "=== Create Character red (copy from me) ===" << RES
			  << std::endl;
	Character red = Character(*(Character *)me);

	std::cout << std::endl
			  << BCYN << "=== Create Character bob ===" << RES << std::endl;
	ICharacter *bob = new Character("bob");

	std::cout << std::endl
			  << BCYN << "=== Me use Ice then Cure on bob ===" << RES
			  << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(3, *bob);

	std::cout << std::endl
			  << BCYN << "=== Me desequip Ice ===" << RES
			  << std::endl;
	groundMaterias[0] = ((Character *)me)->getMateria(0);
	me->unequip(0);

	std::cout << std::endl
			  << BCYN << "=== Red use Ice then Cure on bob ===" << RES
			  << std::endl;
	red.use(0, *bob);
	red.use(1, *bob);
	red.use(3, *bob);

	std::cout << std::endl
			  << BCYN << "=== Red tries to equip 3 more Ice materias ===" << RES
			  << std::endl;
	for (int i = 0; i < 3; i++)
	{
		tmp = src->createMateria("ice");
		red.equip(tmp);
	}
	delete tmp;

	std::cout << std::endl
			  << BCYN << "=== Red desequip Cure ===" << RES
			  << std::endl;
	groundMaterias[1] = red.getMateria(1);
	red.unequip(1);

	std::cout << std::endl
			  << BCYN << "=== Red equips a last Ice materia ===" << RES
			  << std::endl;
	tmp = src->createMateria("ice");
	red.equip(tmp);
	
	std::cout << std::endl
			  << BCYN << "=== Delete Bob ===" << RES << std::endl;
	delete bob;

	std::cout << std::endl
			  << BCYN << "=== Delete Me ===" << RES << std::endl;
	delete me;

	std::cout << std::endl
			  << BCYN << "=== Delete Materia source ===" << RES << std::endl;
	delete src;

	std::cout << std::endl
			  << BCYN << "=== Delete ground materias ===" << RES << std::endl;
	delete groundMaterias[0];
	delete groundMaterias[1];

	std::cout << std::endl
		  << BCYN << "=== Destruct Red ===" << RES << std::endl;

	return 0;
}