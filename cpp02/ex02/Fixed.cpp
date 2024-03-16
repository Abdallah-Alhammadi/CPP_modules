/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:21:30 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/26 20:01:07 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed Fixed::operator + (const Fixed &rhs) const
{
	return(this->toFloat() + rhs.toFloat());
}
Fixed Fixed::operator - (const Fixed &rhs) const
{
	return(this->toFloat() - rhs.toFloat());
}
Fixed Fixed::operator * (const Fixed &rhs) const
{
	return(this->toFloat() * rhs.toFloat());
}
Fixed Fixed::operator / (const Fixed &rhs) const
{
	return(this->toFloat() / rhs.toFloat());
}

Fixed::Fixed()
{
	this->i = 0;
}
Fixed::Fixed(const int num)
{
	this->i = (num << this->j);
}

Fixed::Fixed(const	float num1)
{
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
}

Fixed::Fixed(const Fixed &rhs)
{
	*this=rhs;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	if(this != &rhs)
	{
		this->i = rhs.i;
	}
	return *this;
}

void Fixed::setRawBits(int const raw)
{
	this->i = raw;
}

int Fixed::getRawBits(void) const
{
	return this->i;
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return(this->toFloat() != rhs.toFloat());
}
bool Fixed::operator==(const Fixed &rhs) const
{
	return(this->toFloat() == rhs.toFloat());
}
bool Fixed::operator >(const Fixed &rhs) const
{
	return(this->toFloat() > rhs.toFloat());
}
bool Fixed::operator >=(const Fixed &rhs) const
{
	return(this->toFloat() >= rhs.toFloat());
}
bool Fixed::operator <(const Fixed &rhs) const
{
	return(this->toFloat() < rhs.toFloat());
}
bool Fixed::operator <=(const Fixed &rhs) const
{
	return(this->toFloat() <= rhs.toFloat());
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if(a > b)
		return(a);
	else
		return(b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if(a < b)
		return(b);
	else
		return(a);
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if(a > b)
		return(a);
	else
		return(b);
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if(a < b)
		return(b);
	else
		return(a);
}

Fixed &Fixed::operator ++()
{
	this->i += 1;
	return(*this);
}
Fixed &Fixed::operator --()
{
	this->i -= 1;
	return(*this);
}
Fixed Fixed::operator ++(int)
{
	Fixed	obj(*this);
	this->i += 1;
	return (obj);
}
Fixed Fixed::operator --(int)
{
	Fixed	obj(*this);
	this->i -= 1;
	return (obj);
}
