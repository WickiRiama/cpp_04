/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:59:37 by mriant            #+#    #+#             */
/*   Updated: 2022/11/25 17:03:46 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "WrongCat.hpp"

//==============================================================================
// Constructors and Desctructor
//==============================================================================

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->_type = "wrong cat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	*this = src;
	std::cout << "WrongCat copy constructor called"
			  << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

//==============================================================================
// Operators
//==============================================================================

WrongCat &WrongCat::operator=(WrongCat const &rhs)
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

void WrongCat::makeSound(void) const
{
	std::cout << "Mew ?" << std::endl;
}
