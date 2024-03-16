/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 19:52:35 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/23 19:52:37 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target): AForm("RobotomyRequestForm", 72, 45), _target(_target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &object): AForm(object), _target(object.getTarget())
{
	*this = object;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	if (this != &obj)
		AForm::operator=(obj);
	return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (this->getSigned())
		{
			if (executor.getGrade() <= this->getExecGrade())
			{
				srand(time(NULL));
				if (rand() % 2)
				{	
					std::cout << "Drr....... Drr......." << std::endl;
					std::cout << this->_target << " has been robotomized successfully" << std::endl;
				}
				else
					std::cout << " robotomy failed!" << std::endl;
			}
			else
				throw std::out_of_range("Bureaucrat Grade Not Enough");
		}
		else
			throw std::out_of_range("Bureaucrat Form not signed");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}