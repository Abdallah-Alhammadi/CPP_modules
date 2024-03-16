/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:19:19 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/21 12:19:20 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name_002)
{
	this->name = name_002;
}
HumanB::~HumanB()
{
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << Weapon_B->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon1)
{
	this->Weapon_B = &Weapon1;
}

