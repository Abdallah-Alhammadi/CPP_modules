/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:24:03 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/21 12:24:04 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGAnimal_HPP
#define WRONGAnimal_HPP
#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& obj);
	WrongAnimal &operator=(const WrongAnimal& obj);
	~WrongAnimal();
	void makeSound()const;
	std::string getType()const;
};


#endif