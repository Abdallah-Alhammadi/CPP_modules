/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:33:26 by abalhamm          #+#    #+#             */
/*   Updated: 2024/03/15 16:24:55 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>


class RPN
{
    private:
        std::string			equation;
        std::stack<char>	operators;
		std::stack<int>		numbers;
		bool				divideByZero;
		void	calculate();
		void	fillStack(std::string expr);
		
	public:
        RPN();
		RPN(std::string	argv);
        RPN(const RPN &object);
        RPN &operator=(const RPN &obj);
        
        ~RPN();
};

#endif