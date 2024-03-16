/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:23:27 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/21 12:23:28 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal default Constructor called" <<std::endl;
}

Animal::Animal(const Animal& obj)
{
	*this=obj;
	std::cout << "Animal copy Constructor called" <<std::endl;
}

Animal &Animal::operator=(const Animal& obj)
{
	if(this != &obj)
	{
		this->type = obj.type;
		
	}
	std::cout << "Animal copy assignment operator called" <<std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" <<std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal makes sound wooooo" <<std::endl;
}

std::string Animal::getType()const
{
	return this->type;
}