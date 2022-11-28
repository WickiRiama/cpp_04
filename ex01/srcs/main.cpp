/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:43:23 by mriant            #+#    #+#             */
/*   Updated: 2022/11/28 15:40:48 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "colors.h"

int main(void)
{
	int n = 5;
	Animal *animals[n];
	{
		std::cout << BCYN << "=== Deep Copy ===" << RES << std::endl;
		Dog dog1;
		dog1.getBrain()->setIdea(0, "I am Dog 1");

		Dog dog2(dog1);
		std::cout << BWHT << "Before change: dog 1: "
				  << dog1.getBrain()->getIdea(0) << std::endl;
		std::cout << "Before change: dog 2: " << dog2.getBrain()->getIdea(0)
				  << RES << std::endl;

		dog2.getBrain()->setIdea(0, "I am Dog 2");
		std::cout << BWHT << "After change: dog 1: "
				  << dog1.getBrain()->getIdea(0) << std::endl;
		std::cout << "After change: dog 2: " << dog2.getBrain()->getIdea(0)
				  << RES << std::endl;
	}

	std::cout << std::endl
			  << BCYN << "=== Constructors ===" << RES << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::stringstream sstr;
		if (i % 2)
		{
			sstr << "I am Dog number " << i / 2 + 1;
			animals[i] = new Dog();
			animals[i]->getBrain()->setIdea(0, sstr.str());
		}
		else
		{
			sstr << "I am Cat number " << i / 2 + 1;
			animals[i] = new Cat();
			animals[i]->getBrain()->setIdea(0, sstr.str());
		}
	}

	std::cout << std::endl
			  << BCYN << "=== Get types and ideas ===" << RES << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << BWHT << i << ": " << animals[i]->getType() << ", "
				  << animals[i]->getBrain()->getIdea(0) << RES << std::endl;
	}

	std::cout << std::endl
			  << BCYN << "=== Destructors ===" << RES << std::endl;
	for (int i = 0; i < n; i++)
	{
		delete animals[i];
	}
	return 0;
}