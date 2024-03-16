/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:55:11 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/23 17:59:35 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bureaucrat_1("user1", 1);
	std::cout << bureaucrat_1 << std::endl;
	Bureaucrat bureaucrat_2("user2", 33);
	std::cout << bureaucrat_2 << std::endl;
	Form form_1("Form (1)", 5, 10);
	std::cout << "----------------------------------------" << std::endl;
	std::cout << form_1 << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	try {
		Form form_2("Form (2)", 399, 10);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------------" << std::endl;
	try {
		bureaucrat_1.signForm(form_1);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------------" << std::endl;
	std::cout << form_1 << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	try {
		bureaucrat_2.signForm(form_1);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------------" << std::endl;
	std::cout << form_1 << std::endl;
	return 0;
}