/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:24:35 by abalhamm          #+#    #+#             */
/*   Updated: 2024/01/04 10:49:17 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	protected:
		std::string type;
public:
	Cat();
	Cat(const Cat& obj);
	Cat &operator=(const Cat& obj);
	
	~Cat();
	void makeSound() const;
	std::string getType()const;
	const Brain	*getBrain() const;
};


#endif