/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 19:51:26 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/23 19:51:26 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
	protected:
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
		AForm();
		AForm(std::string name, int _gradeSign, int _gradeExec);
		AForm(AForm const &object);
		AForm & operator=(AForm const &obj);
		virtual ~AForm();
		std::string	getName() const;
		int			getExecGrade() const;
		bool		getSigned() const;
		int			getSignGrade() const;
		void		beSigned(Bureaucrat const &obj);
		virtual void		execute(Bureaucrat const &executor) const = 0;
		
};

std::ostream &operator<<(std::ostream &out, AForm const &obj);

#endif