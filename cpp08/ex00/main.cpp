/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:32:49 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/24 17:41:36 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> vec;

	for (int i = 100; i >= 0; i--)
		vec.push_back(i);
	try
	{
		std::cout << easyfind(vec, 70) << std::endl;
		std::cout << easyfind(vec, 2000) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}