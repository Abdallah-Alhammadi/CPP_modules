/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:32:45 by abalhamm          #+#    #+#             */
/*   Updated: 2024/03/15 16:23:48 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int main(int argc, char **argv)
{
    if (argc == 2)
    {
		std::string str = argv[1];
		if (!(str.find_first_not_of("0123456789+/*- ") == std::string::npos))
		{
			std::cout << "Expression is wrong:" << std::endl;
			return (0);
		}

		if (str.find('+') == std::string::npos && str.find('/') == std::string::npos
        	&& str.find('-') == std::string::npos && str.find('*') == std::string::npos)
		{
			std::cout << "Expression is wrong:" << std::endl;
        	return (0);
		}
        RPN rpn(argv[1]);
    }
    else
    {
        std::cout << "Error" << std::endl;
        std::cout << "Usage: ./RPN <expression>" << std::endl; 
    }
}
