/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:20:33 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/21 12:20:34 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int j = -1;
		Harl harl;
		std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		for (int i = 0; i < 4; i++)
		{
			if (levels[i] == argv[1])
			{
				j = i;
			}
		}
		switch (j)
		{
		case 0:
			harl.complain("DEBUG");
			/*fall through*/
		case 1:
			harl.complain("INFO");
			/*fall through*/
		case 2:
			harl.complain("WARNING");
			/*fall through*/
		case 3:
			harl.complain("ERROR");
			/*fall through*/
			break;
		default:
			std::cout<< "[ Probably complaining about insignificant problems ]" <<std::endl ;
			break;
		}			
	}	
	else
		std::cout<< "[ Probably complaining about insignificant problems ]"<<std::endl ;
}