/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:50:02 by mriant            #+#    #+#             */
/*   Updated: 2022/11/25 16:51:32 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
protected:
	std::string _type;

public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &src);
	~WrongAnimal(void);

	WrongAnimal &operator=(WrongAnimal const &rhs);
	
	void makeSound(void) const;
	std::string getType(void) const;
};

#endif