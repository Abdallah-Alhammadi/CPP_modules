/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:25:11 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/28 21:02:28 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CPP
#define BRAIN_CPP
#include <iostream>
#include <string>
# include <cstdlib>

class Brain
{
	std::string	ideas[100];
public:
	Brain();
	Brain(const Brain& obj);
	Brain &operator=(const Brain& obj);
	~Brain();
	void	getIdeas() const;
	void	setIdeas(std::string *ideas);
	const std::string *getIdeaas();
	void	changeIdeas();
};





#endif