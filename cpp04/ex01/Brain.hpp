/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:24:27 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/21 12:24:28 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CPP
#define BRAIN_CPP
#include <iostream>
#include <string>
# include <cstdlib>

class Brain
{
public:
	Brain();
	Brain(const Brain& obj);
	Brain &operator=(const Brain& obj);
	~Brain();
	void	getIdeas() const;
	void	setIdeas(std::string *ideas);
	std::string *getIdeaas();
	// void	changeIdeas();
	std::string	ideas[100];
};





#endif