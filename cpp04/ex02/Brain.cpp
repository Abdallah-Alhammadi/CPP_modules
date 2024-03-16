/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:25:07 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/28 21:02:26 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
	std::string idea[10] = {"IDEA01", "IDEA02","IDEA03","IDEA04","IDEA05","IDEA06",
							"IDEA07","IDEA08","IDEA09","IDEA10"};
	for(int i = 0; i < 5; i++)
		this->ideas[i] = idea[rand() % 10];
	for(int i = 0; i < 5; i++)
		std::cout << ideas[i] << std::endl;
	for(int i = 5; i < 100; i++)
		this ->ideas[i]= "default";
}

Brain ::Brain(const Brain& obj)
{
	*this = obj;
	std::cout << "Brain copy Constructor called" <<std::endl;
	
}
Brain &Brain ::operator=(const Brain& obj)
{
	if(this != &obj)
	{
		for(int i = 0; i < 5; i++)
			this->ideas[i] = obj.ideas[i];
			
	}
	std::cout << "Brain copy assignment operator called" <<std::endl;
	return *this;
	
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" <<std::endl;
}

void	Brain::getIdeas() const
{
	for(int i = 0; i < 5; i++)
		std::cout << ideas[i] << std::endl;
}

void	Brain::setIdeas(std::string *ideas)
{
	for (int i = 0; i < 5; i++)
		this->ideas[i] = ideas[i];
}

void	Brain::changeIdeas() {
	for (int i = 0; i < 5; i++)
		this->ideas[i] = "Another ideas";
}

const std::string	*Brain::getIdeaas() {
	return this->ideas;
}