/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:13:57 by mriant            #+#    #+#             */
/*   Updated: 2022/11/25 16:32:34 by mriant           ###   ########.fr       */
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
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	*this = src;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
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
