/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:26:07 by mriant            #+#    #+#             */
/*   Updated: 2022/11/28 16:26:08 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include "Brain.hpp"

class AAnimal
{
protected:
	std::string _type;
	Brain *_brain;

public:
	AAnimal(void);
	AAnimal(AAnimal const &src);
	virtual ~AAnimal(void);

	AAnimal &operator=(AAnimal const &rhs);
	
	virtual void makeSound(void) const = 0;
	std::string getType(void) const;
	Brain *getBrain(void) const;
};

#endif