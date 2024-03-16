/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:32:31 by abalhamm          #+#    #+#             */
/*   Updated: 2024/03/15 16:23:21 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		BitcoinExchange exchange_rate(av[1]);	
	}
	else 
	{
		std::cerr << "Invalid Arguments given: " << std::endl;
		std::cerr << "uage: ./btc <infile>" << std::endl;
		return (1);
	}
	return (0);
}
