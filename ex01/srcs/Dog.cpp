/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:13:57 by mriant            #+#    #+#             */
/*   Updated: 2022/11/28 15:31:44 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Dog.hpp"

//==============================================================================
// Constructors and Desctructor
//==============================================================================

Dog::Dog(void) : Animal()
{
	this->_type = "dog";
	this->_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	this->_brain = new Brain();
	*this = src;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

//==============================================================================
// Operators
//==============================================================================

Dog &Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		*this->_brain = *rhs._brain;
	}
	return *this;
}

//==============================================================================
// Functions
//==============================================================================

void Dog::makeSound(void) const
{
	std::cout << "Waf !" << std::endl;
}
