/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:32:45 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/24 17:41:26 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <vector>
# include <iostream>

template < typename T>

int easyfind(T &container, int x)
{
	typename T::iterator val = std::find(container.begin(), container.end(), x);
	if (val == container.end())
		throw std::runtime_error("Could not find the element");
	return *val;
}


#endif