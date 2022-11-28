/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:26:20 by mriant            #+#    #+#             */
/*   Updated: 2022/11/28 14:53:14 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
private:
	std::string _ideas[100];

public:
	Brain(void);
	Brain(Brain const &src);
	~Brain(void);

	Brain &operator=(Brain const &rhs);

	std::string getIdea(unsigned int i) const;
	void setIdea(unsigned int i, std::string str);
};

#endif