/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:54:37 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/23 17:46:38 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "----------------------------------------"<< std::endl;
	Bureaucrat a("Max", 50);
	std::cout << a << std::endl;
	a.gradeIncreament();
	std::cout << a << std::endl;
	a.gradeDecreament();
	std::cout << a << std::endl;
	std::cout << "----------------------------------------"<< std::endl;
	Bureaucrat me("Abdalla", -99);
	std::cout << me << std::endl;
	std::cout << "----------------------------------------"<< std::endl;
	Bureaucrat b("Ali", 200);
	std::cout << b << std::endl;
	std::cout << "----------------------------------------"<< std::endl;
	
	return 0;
}