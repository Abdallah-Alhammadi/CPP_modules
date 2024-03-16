/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:25:17 by abalhamm          #+#    #+#             */
/*   Updated: 2024/01/04 10:46:30 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default Constructor called" <<std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	*this=obj;
	std::cout << "Cat copy Constructor called" <<std::endl;
}

Cat &Cat::operator=(const Cat& obj)
{
	if(this != &obj)
	{
		this->type = obj.type;
		if (this->brain != NULL)
			delete this->brain;
		this->brain = new Brain();
		this->brain = obj.brain;			
	}
	std::cout << "Cat copy assignment operator called" <<std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" <<std::endl;
	delete this->brain;
}
void Cat::makeSound() const
{
	std::cout << "Cat makes sound meows" <<std::endl;
}

std::string Cat::getType()const
{
	return this->type;
}

const Brain	*Cat::getBrain() const
{
	return (this->brain);	
}