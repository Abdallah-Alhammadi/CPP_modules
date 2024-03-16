/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:23:34 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/21 12:23:35 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat default Constructor called" <<std::endl;
}

Cat::Cat(const Cat& obj) :Animal(obj)
{
	*this=obj;
	std::cout << "Cat copy Constructor called" <<std::endl;
}

Cat &Cat::operator=(const Cat& obj)
{
	if(this != &obj)
	{
		this->type = obj.type;
		
	}
	std::cout << "Cat copy assignment operator called" <<std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" <<std::endl;
}
void Cat::makeSound() const
{
	std::cout << "Cat makes sound meows" <<std::endl;
}

std::string Cat::getType()const
{
	return this->type;
}