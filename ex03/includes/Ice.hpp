/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 09:26:15 by mriant            #+#    #+#             */
/*   Updated: 2022/11/29 09:49:03 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:

	public:
		Ice(void);
		Ice(Ice const &src);
		virtual ~Ice(void);

		Ice &operator=(Ice const &rhs);

		virtual AMateria *clone(void) const;
		virtual void use(ICharacter &target);
};

#endif