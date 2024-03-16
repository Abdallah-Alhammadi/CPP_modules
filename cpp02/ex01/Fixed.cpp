/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:21:10 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/26 20:02:46 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" <<std::endl;
	this->i = 0;
}
Fixed::Fixed(const int num)
{
	std::cout <<"Int constructor called" <<std::endl;
	this->i = (num << this->j);
}

Fixed::Fixed(const	float num1)
{
	std::cout << "Float constructor called" <<std::endl;
	this->i = (roundf(num1 * (1 << this->j)));
}

std::ostream & operator<<(std::ostream &out, Fixed const &rhs)
{
	out << rhs.toFloat();
	return (out);
}

int Fixed::toInt(void) const
{
	return(this->i >> this->j);
}

float Fixed::toFloat(void) const
{
	return(roundf(this->i) / (1 << this->j));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" <<std::endl;
}

Fixed::Fixed(const Fixed &rhs)
{
	std::cout << "Copy constructor called" <<std::endl;
	*this=rhs;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called " <<std::endl;
	if(this != &rhs)
	{
		this->i = rhs.i;
	}
	return *this;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBitscalled " <<std::endl;
	this->i = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called " <<std::endl;
	return this->i;
}
