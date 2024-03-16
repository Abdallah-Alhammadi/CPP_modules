/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:18:49 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/21 12:18:50 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if(N < 0)
		return(NULL);
	Zombie *obj = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		obj[i].setName(name);
		obj[i].announce();
	}
	return(obj);
	
}