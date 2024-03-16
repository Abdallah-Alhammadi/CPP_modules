/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:54:54 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/23 17:17:01 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
# include "Form.hpp"

class Form;
class Bureaucrat
{
	private:
		const std::string _name;
		int			_grade;
		
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &object);
		Bureaucrat & operator=(Bureaucrat const &obj);
		std::string	getName() const;
		int			getGrade() const;
		~Bureaucrat();
		void		gradeIncreament();
		void		gradeDecreament();
		void		signForm(Form &form);

};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj);

#endif