/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:24:27 by mriant            #+#    #+#             */
/*   Updated: 2022/12/05 12:37:28 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "MateriaSource.hpp"

//==============================================================================
// Constructors
//==============================================================================

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_source[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete this->_source[i];
		this->_source[i] = NULL;
	}
}

//==============================================================================
// Operators
//==============================================================================

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->_source[i];
			this->_source[i] = rhs.getMateria(i)->clone();
		}
	}
	return *this;
}

//==============================================================================
// Functions
//==============================================================================

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	while (i < 4 && this->_source[i])
		i++;
	if (i < 4)
	{
		std::cout << "Materia learned in slot " << i << std::endl;
		this->_source[i] = m;
	}
	else
		std::cout << "There is no room to learn a new Materia" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	int i = 0;
	AMateria *newMateria;

	while (i < 4 && this->_source[i] && this->_source[i]->getType() != type)
		i++;
	if (i == 4 || !this->_source[i])
		return 0;
	else
	{
		newMateria = this->_source[i]->clone();
		return newMateria;
	}
}

AMateria *MateriaSource::getMateria(int idx) const
{
	if (idx >= 0 && idx <= 3)
		return this->_source[idx];
	else
	{
		std::cout << "There is no slot " << idx << " in the source"
				  << std::endl;
		return NULL;
	}
}