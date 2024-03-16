/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:23:50 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/21 12:23:50 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl << std::endl;
	const WrongAnimal* abc = new WrongAnimal();
	const WrongAnimal* f = new WrongCat();
	std::cout << f->getType() << " " << std::endl;
	f->makeSound();
	abc->makeSound();
	delete i;
	delete j;
	delete meta;
	delete f;
	delete abc;
	return 0;


	
	
}