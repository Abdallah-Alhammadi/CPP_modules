/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:23:03 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/28 13:05:18 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap	trap1("Player1");
	std::cout << "\n";
	trap1.attack("soldier0");
	std::cout << "\n";
	trap1.attack("soldier1");
	std::cout << "\n";
	trap1.attack("soldier2");
	std::cout << "\n";
	trap1.attack("soldier3");
	std::cout << "\n";
	trap1.attack("soldier4");
	std::cout << "\n";
	trap1.takeDamage(3);
	std::cout << "\n";
	trap1.beRepaired(10);
	std::cout << "\n";
	trap1.takeDamage(-2);
	std::cout << "\n";
	trap1.takeDamage(5);
	std::cout << "\n";
	trap1.takeDamage(50);
	std::cout << "\n";
	trap1.beRepaired(5);
	std::cout << "\n";
	trap1.highFiveGuys();
	return (0);
}