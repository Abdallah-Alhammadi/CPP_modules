/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:46:43 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/23 21:13:23 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERSION_H
# define SCALARCONVERSION_H

# include <iostream>
# include <limits>
# include <stdlib.h>

class ScalarConverter
{
	private:
	
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const & copy);
		ScalarConverter & operator=(ScalarConverter const & rhs);

	public:
	
		~ScalarConverter(void);
		static void	convert(std::string str);
		static void	toChar(std::string str);
		static void	toInt(std::string str);
		static void	toDouble(std::string str);
		static void	toFloat(std::string str);
};

#endif