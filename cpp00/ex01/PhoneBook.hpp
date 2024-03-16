/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:25:36 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/20 20:44:55 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream> // for input/output operations
# include <iomanip> // for setting the width of the output
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact		_contacts[8];
		int			_index;
		int			_maxIndex;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void		addContact(Contact contact);
		void		searchContact(void);
		void		printContacts(void);
};

#endif