/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:47:02 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/23 20:47:03 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

# include <stdint.h>
# include <iostream>
# include <cstdlib>
# include <string>

struct Data
{
	std::string	s;
	int			n;
};

class Serialize
{
	private:
		Serialize();
		Serialize(Serialize const &object);
		Serialize & operator=(Serialize const &rhs);

	public:
		~Serialize();
		static uintptr_t	serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};

#endif