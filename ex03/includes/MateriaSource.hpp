/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:11:51 by mriant            #+#    #+#             */
/*   Updated: 2022/11/29 18:12:40 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_source[4];

public:
	MateriaSource(void);
	MateriaSource(MateriaSource const &src);
	virtual ~MateriaSource();

	MateriaSource &operator=(MateriaSource const &rhs);

	virtual void learnMateria(AMateria *);
	virtual AMateria *createMateria(std::string const &type);
	AMateria *getMateria(int idx) const;
};

#endif