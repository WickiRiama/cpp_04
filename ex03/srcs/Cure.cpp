/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 09:56:42 by mriant            #+#    #+#             */
/*   Updated: 2022/11/29 18:21:18 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cure.hpp"

//==============================================================================
// Constructors
//==============================================================================

Cure::Cure(void): AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &src)
{
	*this = src;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

//==============================================================================
// Operators
//==============================================================================

Cure &Cure::operator=(Cure const &rhs)
{
	(void) rhs;
	return *this;
}

//==============================================================================
// Functions
//==============================================================================

AMateria *Cure::clone(void) const
{
	Cure *clonedCure = new Cure();
	return clonedCure;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}