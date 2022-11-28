/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:51:48 by mriant            #+#    #+#             */
/*   Updated: 2022/11/28 16:27:29 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <string>

#include "AAnimal.hpp"

class Dog : public AAnimal
{
public:
	Dog(void);
	Dog(Dog const &src);
	virtual ~Dog(void);

	Dog &operator=(Dog const &rhs);

	virtual void makeSound() const;
};

#endif