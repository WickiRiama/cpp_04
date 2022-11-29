/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 09:42:12 by mriant            #+#    #+#             */
/*   Updated: 2022/11/29 09:53:03 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Ice.hpp"

//==============================================================================
// Constructors
//==============================================================================

Ice::Ice(void): AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const &src)
{
	*this = src;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

//==============================================================================
// Operators
//==============================================================================

Ice &Ice::operator=(Ice const &rhs)
{
	(void) rhs;
	return *this;
}

//==============================================================================
// Functions
//==============================================================================

AMateria *Ice::clone(void) const
{
	Ice *clonedIce = new Ice();
	return clonedIce;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *";
}