/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:47:33 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/23 20:47:40 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "A.hpp"
#include "C.hpp"
#include "B.hpp"
#include "Base.hpp"

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif