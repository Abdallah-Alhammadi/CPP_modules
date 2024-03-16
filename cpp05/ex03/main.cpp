/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 19:52:12 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/23 19:56:45 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	{
		std::string formName = "presidential pardon"; 
		std::string formTarget = "Tree";
		
		Intern intern;
		Bureaucrat bureaucrat("Max", 1);
		AForm *f = intern.makeForm(formName, formTarget);
		std::cout << *f;
		bureaucrat.signAForm(*f);
		std::cout << (*f).getSigned() << std::endl;
		bureaucrat.executeForm(*f);
		delete f;
	}
}