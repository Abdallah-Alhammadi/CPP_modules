/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:18:40 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/21 12:18:40 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "No name";
	std::cout << "Default Constructor" << std::endl;
}

Zombie::Zombie(std::string name1)
{		
	std::cout << "Name Constructor" << std::endl;
	this->name = name1;
}

Zombie::~Zombie()
{	
	std::cout << this->name <<" Zombie Destroyed" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name1)
{
	this->name = name1;
}
