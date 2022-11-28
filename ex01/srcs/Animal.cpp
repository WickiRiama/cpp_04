/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:33:07 by mriant            #+#    #+#             */
/*   Updated: 2022/11/28 15:34:08 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"

//==============================================================================
// Constructors and Desctructor
//==============================================================================

Animal::Animal(void) : _type("default_animal"), _brain(NULL)
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &src): _brain(NULL)
{
	*this = src;
	std::cout << "Animal copy constructor called"
			  << std::endl;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

//==============================================================================
// Operators
//==============================================================================

Animal &Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return *this;
}

//==============================================================================
// Functions
//==============================================================================

void Animal::makeSound(void) const
{
	std::cout << "** Animal Sound **" << std::endl;
}

std::string Animal::getType(void) const
{
	return this->_type;
}

Brain *Animal::getBrain(void) const 
{
	return this->_brain;
}