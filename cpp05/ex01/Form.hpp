/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:55:06 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/23 19:50:51 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		const std::string	_name;
		bool				_itsSigned;
		const int			_gradeSign;
		const int			_gradeExec;

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
		Form();
		Form(std::string name, int _gradeSign, int _gradeExec);
		Form(Form const &object);
		Form & operator=(Form const &obj);
		~Form();
		std::string	getName() const;
		int			getExecGrade() const;
		bool		getSigned() const;
		int			getSignGrade() const;
		void		beSigned(Bureaucrat const &obj);
		
};

std::ostream &operator<<(std::ostream &out, Form const &obj);

#endif