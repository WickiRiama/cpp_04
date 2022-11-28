/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:17:17 by mriant            #+#    #+#             */
/*   Updated: 2022/11/28 17:35:01 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AMateria.hpp"

//==============================================================================
// Constructors
//==============================================================================

AMateria::AMateria(void) : _type("")
{
	std::cout << "Materia default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "Materia constructor called with type " << this->_type
			  << std::endl;
}

AMateria::AMateria(AMateria const & rhs)
{
	*this = rhs;
	std::cout << "Materia copy constructor called" << std::endl;
}

//==============================================================================
// Operators
//==============================================================================

AMateria &AMateria::operator=(AMateria const &rhs)
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

void AMateria::use(ICharacter &target)
{
	std::cout << "* uses a basic Materia on " << target.getName() << std::endl;
}