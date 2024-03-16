/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 19:45:37 by abalhamm          #+#    #+#             */
/*   Updated: 2024/02/23 19:50:51 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"

AForm::AForm(): _name("AForm"), _itsSigned(false), _gradeSign(1), _gradeExec(10) 
{
}

AForm::AForm(std::string name, int _gradeSign, int _gradeExec):
	_name(name), _itsSigned(false), _gradeSign(_gradeSign),
	_gradeExec(_gradeExec)
{
	try
	{
		if (this->_gradeExec > 150 || this->_gradeSign > 150)
			throw AForm::GradeTooLowException();
		else if (this->_gradeExec < 1 || this->_gradeSign < 1)
			throw AForm::GradeTooHighException();			
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

AForm::AForm(AForm const &object):
	_name(object._name), _itsSigned(object._itsSigned),
	_gradeSign(object._gradeSign), _gradeExec(object._gradeExec)
{
	*this=object;
}

AForm & AForm::operator=(AForm const &obj)
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

std::ostream &operator<<(std::ostream &out, AForm const &obj)
{
	out << "AForm name: " << obj.getName() << std::endl;
	out << "Grade to sign: " << obj.getSignGrade() << std::endl;
	out << "Grade to execute: " << obj.getExecGrade() << std::endl;
	out << "Signed: " << obj.getSigned() << std::endl;
	return (out);
}

AForm::~AForm()
{
}

void	AForm::beSigned(Bureaucrat const &obj)
{
	if (obj.getGrade() > this->_gradeSign)
		throw AForm::GradeTooLowException();
	else
		this->_itsSigned = true;
}

bool	AForm::getSigned() const
{
	return (this->_itsSigned);
}

int	AForm::getSignGrade() const
{
	return (this->_gradeSign);
}

int	AForm::getExecGrade() const
{
	return (this->_gradeExec);
}

std::string AForm::getName() const
{
	return (this->_name);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return("Grade Too High");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return("Grade Too Low");
}