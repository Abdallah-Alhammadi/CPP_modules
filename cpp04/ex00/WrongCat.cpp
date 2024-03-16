/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:24:08 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/21 12:24:08 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat default Constructor called" <<std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) :WrongAnimal(obj)
{
	*this=obj;
	std::cout << "WrongCat copy Constructor called" <<std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& obj)
{
	if(this != &obj)
	{
		this->type = obj.type;
		
	}
	std::cout << "WrongCat copy assignment operator called" <<std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" <<std::endl;
}
void WrongCat::makeSound() const
{
	std::cout << "WrongCat makes sound meows" <<std::endl;
}

std::string WrongCat::getType()const
{
	return this->type;
}