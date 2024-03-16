/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:34:01 by abalhamm          #+#    #+#             */
/*   Updated: 2024/03/15 17:06:41 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <sys/time.h>

class PmergeMe
{
	private:
		std::vector<int> vector;
		std::deque<int> deque;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();
		void mergeMe(std::string input);
		void getFill(std::string input);
		void fJohnsonSort(std::vector<int> &arr);
		void fJohnsonSort(std::deque<int> &arr);
};


#endif