/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:33:19 by mriant            #+#    #+#             */
/*   Updated: 2022/11/28 15:06:04 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Brain.hpp"

//==============================================================================
// Constructors and destructor
//==============================================================================

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain(void)
{
	std::cout << "Brain desstructor called" << std::endl;
}

//==============================================================================
// Operators
//==============================================================================

Brain &Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
	{
		for (unsigned int i = 0; i < 100; i++)
		{
			this->_ideas[i] = rhs.getIdea(i);
		}
	}
	return *this;
}

//==============================================================================
// Functions
//==============================================================================

std::string Brain::getIdea(unsigned int i) const
{
	if (i < 100)
	{
		return this->_ideas[i];
	}
	return NULL;
}

void Brain::setIdea(unsigned int i, std::string str)
{
	if (i < 100)
	{
		this->_ideas[i] = str;
	}
	else{
		std::cerr << "Idea index must be between 0 and 100" << std::endl;
	}
}