/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 09:53:55 by mriant            #+#    #+#             */
/*   Updated: 2022/11/29 09:54:55 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:

	public:
		Cure(void);
		Cure(Cure const &src);
		virtual ~Cure(void);

		Cure &operator=(Cure const &rhs);

		virtual AMateria *clone(void) const;
		virtual void use(ICharacter &target);
};

#endif