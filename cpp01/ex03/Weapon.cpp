/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:19:37 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/21 12:19:37 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type = "No_Type";
}

Weapon::Weapon(std::string Type_1)
{
	this->type = Type_1;
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string Type_2)
{
	this->type = Type_2;
}

const std::string &Weapon::getType() const
{
	return type;
}
