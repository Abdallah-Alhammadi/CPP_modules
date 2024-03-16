/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:48:54 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/24 15:48:03 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template <typename T>
void increment(T  &element)
{
	element += 1;
}

template <typename T>
void iter(T *array, int len, void(*x)(T  &element) )
{
	for (int i = 0; i < len; i++)
	{
		x(array[i]);
	}
}


#endif