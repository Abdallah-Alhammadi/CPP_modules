/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:22:05 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/28 13:41:16 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	trap1("Player1");
	std::cout << "\n";
	trap1.attack("soldier_00");
	std::cout << "\n";
	trap1.attack("soldier_01");
	std::cout << "\n";
	trap1.attack("soldier_02");
	std::cout << "\n";
	trap1.attack("soldier_03");
	std::cout << "\n";
	trap1.attack("soldier_04");
	std::cout << "\n";
	trap1.takeDamage(1);
	std::cout << "\n";
	trap1.beRepaired(10);
	std::cout << "\n";
	trap1.takeDamage(-5);
	std::cout << "\n";
	trap1.takeDamage(10);
	std::cout << "\n";
	trap1.takeDamage(25);
	std::cout << "\n";
	trap1.beRepaired(8);
	std::cout << "\n";
	return (0);
}