/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:49:07 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/23 20:49:09 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>


template< typename T >
class Array
{
	private:
		unsigned int array_size;
		T	*array;

	public:
		Array();
		Array(Array const &obj);
		Array &operator=(Array const &rhs);
		Array( unsigned int n);
		T &operator[](unsigned int n);
		~Array();
		unsigned int size() const;
};


# include "Array.tpp"


#endif