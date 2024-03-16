/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:24:44 by abalhamm          #+#    #+#             */
/*   Updated: 2024/01/04 10:49:43 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	protected:
		std::string type;
public:
	Dog();
	Dog(const Dog& obj);
	Dog &operator=(const Dog& obj);
	
	~Dog();
	void makeSound()const;
	std::string getType()const;
	const Brain	*getBrain() const;
	
};


#endif