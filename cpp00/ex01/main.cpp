/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:25:19 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/26 13:33:18 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		main(void) 
{
	PhoneBook	phoneBook; // instance of the PhoneBook class
	Contact		contact;// temporary Contact object
	std::string	input;

	while (1) {
		std::cout << "*+++++++++++++++++++++++++++++++++++++++++++*" << std::endl;
		std::cout << "|  COMMANDS OPTION: |ADD| |SEARCH| |EXIT|   |" << std::endl;
		std::cout << "*+++++++++++++++++++++++++++++++++++++++++++*" << std::endl;
		std::cout << "Enter a Command: ";
		if (!std::getline(std::cin, input))
			break ;
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
		{
			contact.setFirstName();
			contact.setLastName();
			contact.setNickname();
			contact.setPhoneNumber();
			contact.setDarkestSecret();
			phoneBook.addContact(contact);
		}
		else if (input == "SEARCH")
			phoneBook.searchContact();
	}
	return (0);
}