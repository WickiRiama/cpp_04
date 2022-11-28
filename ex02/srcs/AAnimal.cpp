/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:25:46 by mriant            #+#    #+#             */
/*   Updated: 2022/11/28 16:25:56 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AAnimal.hpp"

//==============================================================================
// Constructors and Desctructor
//==============================================================================

AAnimal::AAnimal(void) : _type("default_AAnimal"), _brain(NULL)
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src): _brain(NULL)
{
	*this = src;
	std::cout << "AAnimal copy constructor called"
			  << std::endl;
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal destructor called" << std::endl;
}

//==============================================================================
// Operators
//==============================================================================

AAnimal &AAnimal::operator=(AAnimal const &rhs)
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

void AAnimal::makeSound(void) const
{
	std::cout << "** AAnimal Sound **" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return this->_type;
}

Brain *AAnimal::getBrain(void) const 
{
	return this->_brain;
}