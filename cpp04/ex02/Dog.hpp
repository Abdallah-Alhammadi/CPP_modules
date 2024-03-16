/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:25:34 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/28 21:02:29 by abalhamm         ###   ########.fr       */
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