/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:43:05 by mriant            #+#    #+#             */
/*   Updated: 2022/11/29 18:18:50 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.hpp"

//==============================================================================
// Constructors
//==============================================================================

Character::Character(void): ICharacter(), _name("")
{
	for (int i = 0; i < 4; i++)
		{
			this->_inventory[i] = NULL;
		}
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) : ICharacter(), _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(Character const &src)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = src;
}

Character::~Character(void)
{
	std::cout << "Character destrutor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
	}
}

//==============================================================================
// Operators
//==============================================================================

Character &Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->_inventory[i];
		}
		for (int i = 0; i < 4; i++)
		{
			this->_inventory[i] = rhs.getMateria(i)->clone();
		}
	}
	return *this;
}

//==============================================================================
// Functions
//==============================================================================

std::string const &Character::getName(void) const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	int i = 0;

	while (this->_inventory[i])
	{
		i++;
	}
	if (i < 4)
	{
		this->_inventory[i] = m;
		std::cout << this->_name << " has equiped a " << m->getType()
				  << " materia in slot " << i << std::endl;
	}
	else
		std::cout << this->_name << " already has 4 materias equiped."
				  << " There is no room for a new one" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		this->_inventory[idx] = NULL;
		std::cout << this->_name << " has desequiped the materia in slot "
				  << idx << std::endl;
	}
	else
		std::cout << "There is no slot " << idx << " in the inventory"
				  << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3)
	{
		this->_inventory[idx]->use(target);
	}
	else
		std::cout << "There is no slot " << idx << " in the inventory"
				  << std::endl;
}

AMateria *Character::getMateria(int idx) const
{
	if (idx >= 0 && idx <= 3)
		return this->_inventory[idx];
	else
	{
		std::cout << "There is no slot " << idx << " in the inventory"
				  << std::endl;
		return NULL;
	}
}