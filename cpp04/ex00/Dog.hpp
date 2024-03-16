/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:23:46 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/21 12:23:47 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
	protected:
		std::string type;
public:
	Dog();
	Dog(const Dog& obj);
	Dog &operator=(const Dog& obj);
	
	~Dog();
	void makeSound()const;
	std::string getType()const;
	
};


#endif