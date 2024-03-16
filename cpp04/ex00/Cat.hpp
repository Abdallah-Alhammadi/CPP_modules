/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:23:39 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/21 12:23:39 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
	protected:
		std::string type;
public:
	Cat();
	Cat(const Cat& obj);
	Cat &operator=(const Cat& obj);
	
	~Cat();
	void makeSound() const;
	std::string getType()const;
};


#endif