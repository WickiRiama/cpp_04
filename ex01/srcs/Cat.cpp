/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:03:25 by mriant            #+#    #+#             */
/*   Updated: 2022/11/28 15:33:26 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cat.hpp"
#include "Brain.hpp"

//==============================================================================
// Constructors and Desctructor
//==============================================================================

Cat::Cat(void) : Animal()
{
	this->_type = "cat";
	this->_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &src)
{
	this->_brain = new Brain();
	*this = src;
	std::cout << "Cat copy constructor called"
			  << std::endl;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

//==============================================================================
// Operators
//==============================================================================

Cat &Cat::operator=(Cat const &rhs)
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

void Cat::makeSound(void) const
{
	std::cout << "Mew ?" << std::endl;
}
