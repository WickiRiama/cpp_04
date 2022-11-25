/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:43:23 by mriant            #+#    #+#             */
/*   Updated: 2022/11/25 17:18:21 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "colors.h"

int main(void)
{
	std::cout << CYN << "Animals" << RES << std::endl;
	const Animal *meta = new Animal();
	const WrongAnimal *wrongMeta = new WrongAnimal();

	std::cout << std::endl
			  << CYN << "Dog" << RES << std::endl;
	const Animal *j = new Dog();

	std::cout << std::endl
			  << CYN << "Cat" << RES << std::endl;
	const Animal *i = new Cat();
	const WrongAnimal *wrongI = new WrongCat();
	const WrongCat *rightI = new WrongCat();

	std::cout << std::endl
			  << CYN << "Get type" << RES << std::endl;
	std::cout << "Animal: " << meta->getType() << " " << std::endl;
	std::cout << "Wrong animal: " << wrongMeta->getType() << " " << std::endl;
	std::cout << "Dog: " << j->getType() << " " << std::endl;
	std::cout << "Cat: " << i->getType() << " " << std::endl;
	std::cout << "Wrong cat: " << wrongI->getType() << " " << std::endl;
	std::cout << "Wrong cat but right pointer: " << rightI->getType() << " "
			  << std::endl;

	std::cout << std::endl
			  << CYN << "Sound" << RES << std::endl;
	std::cout << "Cat: ";
	i->makeSound(); // will output the cat sound!
	std::cout << "Wrong cat: ";
	wrongI->makeSound(); // will output the animal sound!
	std::cout << "Wrong cat but right pointer: ";
	rightI->makeSound(); // will output the animal sound!
	std::cout << "Dog: ";
	j->makeSound();
	std::cout << "Animal: ";
	meta->makeSound();
	std::cout << "Wrong animal: ";
	wrongMeta->makeSound();

	std::cout << std::endl
			  << CYN << "Destructors" << RES << std::endl;
	delete meta;
	delete wrongMeta;
	delete i;
	delete wrongI;
	delete rightI;
	delete j;

	return 0;
}