/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:19:23 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/21 12:19:23 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *Weapon_B;
		std::string name;
	
	public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon &Weapon1);
		void attack();
};
#endif