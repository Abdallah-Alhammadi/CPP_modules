/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:33:10 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/24 17:33:10 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <ctime>
#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
	private:
			unsigned int		_max_value;
			std::vector<int>	_vector;
			
			class EmptyContainer : public std::exception
			{
				public:
					const char *what() const throw();
			};
			class MaxContainer : public std::exception
			{
				public:
					const char *what() const throw();
			};
			
	public:
			Span();
			Span(unsigned int N);
			Span(Span const &object);
			Span &operator=(Span const &object);
			~Span();

			int		longestSpan();
			int		shortestSpan();
			void	addNumber(int num);
			void	addMoreNum(int size);
			
		
};
#endif