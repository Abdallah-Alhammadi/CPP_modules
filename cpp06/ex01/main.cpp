/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:46:51 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/23 21:46:52 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
	Data data;
	data.s = "Born to code";
	data.n = 42;

	uintptr_t serializedValue = Serialize::serialize(&data);
	
	std::cout << "serializedValue  : " << serializedValue << std::endl;
	std::cout << " " << std::endl;
	
	Data *deserializedValue = Serialize::deserialize(serializedValue);

	std::cout << " " << std::endl;
	std::cout << "&data            : " << &data << std::endl;
	std::cout << "deserializeValue : " << deserializedValue << std::endl;
	std::cout << " " << std::endl;
	std::cout << deserializedValue->s << " + " << deserializedValue->n << std::endl;
	return (0);
}

