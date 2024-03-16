/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:25:03 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/21 12:25:03 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
public:
	Animal();
	Animal(const Animal& obj);
	Animal &operator=(const Animal& obj);
	virtual ~Animal() = 0;
	virtual void makeSound()const = 0;
	virtual std::string getType()const = 0;
};


#endif