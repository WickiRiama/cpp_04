/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:49:26 by mriant            #+#    #+#             */
/*   Updated: 2022/11/28 14:53:55 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include "Brain.hpp"

class Animal
{
protected:
	std::string _type;
	Brain *_brain;

public:
	Animal(void);
	Animal(Animal const &src);
	virtual ~Animal(void);

	Animal &operator=(Animal const &rhs);
	
	virtual void makeSound(void) const;
	std::string getType(void) const;
	Brain *getBrain(void) const;
};

#endif