/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:54:32 by mriant            #+#    #+#             */
/*   Updated: 2022/11/29 18:12:17 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string _type;
	AMateria(void);

public:
	AMateria(std::string const &type);
	AMateria(AMateria const &src);
	virtual ~AMateria(void);

	AMateria &operator=(AMateria const &rhs);

	std::string const &getType() const; // Returns the materia type
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif