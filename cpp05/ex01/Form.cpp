/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:55:01 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/23 19:50:51 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Form"), _itsSigned(false), _gradeSign(1), _gradeExec(10) 
{
}

Form::Form(std::string name, int _gradeSign, int _gradeExec):
	_name(name), _itsSigned(false), _gradeSign(_gradeSign),
	_gradeExec(_gradeExec)
{
	try
	{
		if (this->_gradeExec > 150 || this->_gradeSign > 150)
			throw Form::GradeTooLowException();
		else if (this->_gradeExec < 1 || this->_gradeSign < 1)
			throw Form::GradeTooHighException();			
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Form::Form(Form const &object):
	_name(object._name), _itsSigned(object._itsSigned),
	_gradeSign(object._gradeSign), _gradeExec(object._gradeExec)
{
	*this=object;
}

Form & Form::operator=(Form const &obj)
{
	if (this != &obj)
	{
		const_cast<std::string&>(this->_name) = obj.getName();
		const_cast<int&>(this->_gradeSign) = obj.getSignGrade();
		const_cast<int&>(this->_gradeExec) = obj.getExecGrade();
		this->_itsSigned= obj.getSigned();
	}
	return(*this);
}

std::ostream &operator<<(std::ostream &out, Form const &obj)
{
	out << "Form name: " << obj.getName() << std::endl;
	out << "Grade to sign: " << obj.getSignGrade() << std::endl;
	out << "Grade to execute: " << obj.getExecGrade() << std::endl;
	out << "Signed: " << obj.getSigned() << std::endl;
	return (out);
}

Form::~Form()
{
}

void	Form::beSigned(Bureaucrat const &obj)
{
	if (obj.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	else
		this->_itsSigned = true;
}

bool	Form::getSigned() const
{
	return (this->_itsSigned);
}

int	Form::getSignGrade() const
{
	return (this->_gradeSign);
}

int	Form::getExecGrade() const
{
	return (this->_gradeExec);
}

std::string Form::getName() const
{
	return (this->_name);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return("Grade Too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return("Grade Too Low");
}