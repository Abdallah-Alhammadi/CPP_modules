/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:21:57 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/28 14:26:18 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default Constructor  called"<< std::endl;
	this->name1= "Default";
	this->hitPoints= 10;
	this->energyPoints= 10;
	this->attackDamage= 0;

}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Name Constructor  called"<< std::endl;
	this->name1= name;
	this->hitPoints= 10;
	this->energyPoints= 10;
	this->attackDamage= 0;

}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "Copy Constructor  called"<< std::endl;
	*this=obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout << "Copy assignment operator called"<< std::endl;
	if(this!= &obj)
	{
		this->name1 = obj.name1;
		this->hitPoints = obj.hitPoints;
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if(this->energyPoints == 0)
	{
		std::cout << "Thers is no energy points left :(" <<std::endl;
		return;
	}
	if(this->hitPoints == 0)
	{
		std::cout << "No hit points left -_-" <<std::endl;
		return;
	}
	this->energyPoints = this->energyPoints - 1;
	std::cout << "ClapTrap " << this->name1 << " attcks " << target << ", causing " << this->attackDamage << " points of damage!" <<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if((int) amount < 0)
	{
		std::cout << "Invalid damage value !!!" <<std::endl;
		return;
	}
	if(this->hitPoints == 0 || this->hitPoints < (int) amount)
	{
		std::cout << "There is no enough hit points left :(" <<std::endl;
		return;
	}
	this->hitPoints = this->hitPoints - amount;
	std::cout << "ClapTrap " << this->name1 << " has hitPoints "<< this->hitPoints<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->energyPoints == 0)
	{
		std::cout << "There is no energy points left :(" <<std::endl;
		return;
	}
	if(this->hitPoints == 0)
	{
		std::cout << "No hit points left ^_^" <<std::endl;
		return;
	}
	this->energyPoints = this->energyPoints - 1;
	this->hitPoints = this->hitPoints + amount;
	std::cout << "ClapTrap " << this->name1 << " after repair has hitPoints "<< this->hitPoints<< std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called"<< std::endl;
}