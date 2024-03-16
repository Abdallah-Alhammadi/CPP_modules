/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:33:39 by abalhamm          #+#    #+#             */
/*   Updated: 2024/03/15 17:06:41 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "usage: ./a.out \"<numbers>\"" << std::endl;
		return (1);
	}
	std::string str(argv[1]);
	PmergeMe p;
	
	// p.getFill(str);
	p.mergeMe(str);

}