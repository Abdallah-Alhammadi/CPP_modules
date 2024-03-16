/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:48:48 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/24 15:30:25 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
T	max(T &a, T &b)
{
	if(a < b)
		return(b);
	else
		return(a);
}

template <typename T>
T	min(T &a, T &b)
{
	if (b <= a)
		return (b);
	return(a);
}

template< typename T >
void	swap(T &a, T &b)
{
	T m;
	
	m = a;
	a = b;
	b = m;
	return;
}
#endif