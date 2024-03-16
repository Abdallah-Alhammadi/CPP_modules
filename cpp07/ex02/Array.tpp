/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:49:11 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/23 20:49:12 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"


template< typename T>
Array<T>::Array(): array_size(0), array(0)
{
	
}

template< typename T>
Array<T >::Array(unsigned int n): array_size(n), array(new T[n])
{
	
}

template< typename T>
Array<T>::Array(Array const &object): array_size(object.array_size)
{
	this->array = new T[object.array_size];
	for (unsigned int i = 0; i < this->array_size; i++)
		this->array[i] = object.array[i];
}

template< typename T>
Array<T> & Array<T>::operator=(Array const &rhs)
{
	if (this != &rhs)
	{
		if (this->array && this->array_size)
			delete[] this->array;
		this->array_size = rhs.array_size;
		this->array = new T[rhs.array_size];
		for (unsigned int i = 0; i < this->array_size; i++)
			this->array[i] = rhs.array[i];
	}
		
	return (*this);
}

template< typename T>
Array<T>::~Array()
{
	delete [] this->array;
}

template< typename T>
T &Array<T>::operator[](unsigned int n)
{
	if (n < 0 || n >= this->array_size)
		throw std::runtime_error("Index not found");
	return this->array[n];
}

template< typename T>
unsigned int	Array<T>::size() const
{
	return (this->array_size);
}

#endif