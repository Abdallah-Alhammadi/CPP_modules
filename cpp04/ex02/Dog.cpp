/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:25:29 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/28 21:02:30 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default Constructor called" <<std::endl;
}

Dog::Dog(const Dog& obj) :Animal(obj)
{
	*this=obj;
	std::cout << "Dog copy Constructor called" <<std::endl;
}

Dog &Dog::operator=(const Dog& obj)
{
	if(this != &obj)
	{
		this->type = obj.type;
		if (this->brain != NULL)
			delete this->brain;
		this->brain = new Brain();
		this->brain = obj.brain;
	}
	std::cout << "Dog copy assignment operator called" <<std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" <<std::endl;
	delete (this->brain);
}

void Dog::makeSound() const
{
	std::cout << "Dog makes sound wofwof" <<std::endl;
}

std::string Dog::getType()const
{
	return this->type;
}
const Brain	*Dog::getBrain() const
{
	return (this->brain);	
}