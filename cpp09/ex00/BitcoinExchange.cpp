/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:32:12 by abalhamm          #+#    #+#             */
/*   Updated: 2024/03/15 16:57:17 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & copy)
{
	*this = copy;
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
	if (this != &rhs)
	{

	}
	return (*this);
}

BitcoinExchange::BitcoinExchange(std::string infile)
{
	try
	{
		this->readFile();
		this->convert(infile);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}	
}

void	BitcoinExchange::readFile()
{
	std::string		name("data.csv");
	std::ifstream	data("data.csv");
	
	if (data.fail())
	{
		data.close();
		throw BitcoinExchange::invalidFileIs(name.c_str());
	}
	std::string line;
	std::string key;
	std::string value;
	getline(data, line);
	while(!data.eof())
	{
		getline(data, line);
		if (line.empty())
			break ;
		std::stringstream str(line);
		getline(str, key, ',');
		getline(str, value);
		this->_rate[key] = atof(value.c_str());
	}
	data.close();
}

std::string BitcoinExchange::nearestDate(std::string date, int line_no, std::string infile)
{
	std::stringstream	read(date);
	std::string			year, month, day;

	getline(read, year, '-');
	getline(read, month, '-');
	getline(read, day);
	int	y = atoi(year.c_str());
	int m = atoi(month.c_str());
	int d = atoi(day.c_str());
	if (d > 1)
		d--;
	else if (m > 1)
	{
		d = 31;
		m--;
	}
	else if (y > 2008)
	{
		d = 31;
		m = 12;
		y--;
	}
	if (y <= 2008)
	{
		std::cerr << "DATE: date not in proper range: " << DEFAULT;
		throw BitcoinExchange::numInvalide(line_no, infile.c_str());
	}
	std::string			updated_date;
	std::stringstream	new_date;
	new_date << y << '-' << std::setw(2) << std::setfill('0')\
	 << m << '-' << std::setw(2) << std::setfill('0') << d;
	updated_date = new_date.str();
	return (updated_date);
}

void BitcoinExchange::conversionPrint(std::string date, float con_val, int line_no, std::string infile)
{
	if (this->_rate.find(date) != this->_rate.end())
	{
		float output = con_val * this->_rate[date];
		std::cout << date << " => " << std::fixed << std::setprecision(2) << con_val;
		std::cout << " * " << this->_rate[date]; 
		std::cout << " = " << output << std::endl;
		return ;
	}
	else
	{
		date = this->nearestDate(date, line_no, infile);
		this->conversionPrint(date, con_val, line_no, infile);
	}
}

bool BitcoinExchange::Delimite_valid(std::string line)
{
	int space_i = line.find(' ');
	if (line[space_i] == ' ' && line[space_i + 1] == '|' && line[space_i + 2] == ' ')
		return (true);
	else
	{
		std::cerr << "DELIMITER: extra spaces or incorrect delimiter: " << DEFAULT;
		return (false);
	}
}

bool BitcoinExchange::dateValid(std::string date)
{
	std::stringstream	str(date);
	std::string			day,month,year;

	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
	{
		std::cerr << "DATE: incorrect date format or separators: " << DEFAULT;
		return (false);
	}
	getline(str, year, '-');
	getline(str, month, '-');
	getline(str, day);
	int	y = atoi(year.c_str());
	int	m = atoi(month.c_str());
	int	d = atoi(day.c_str());
	if ((y < 2009 || y > 2022) || (m < 1 || m > 12) || (d < 1 || d > 31))
	{
		std::cerr << "DATE: date not in proper range: " << DEFAULT;
		return (false);
	}
	else if ((m == 2 && d > 28) && (y != 2012 && y != 2016 && y != 2020))
	{
		std::cerr << "DATE: date not in proper range: " << DEFAULT;
		return (false);
	}
	else if ((m == 2 && d > 29) && (y == 2012 || y == 2016 || y == 2020))
	{
		std::cerr << "DATE: date not in proper range: " << DEFAULT;
		return (false);
	}
	return (true);
}

void BitcoinExchange::split(std::string line, std::string infile, int line_no)
{
	std::stringstream	str(line);
	std::string			date, delimiter, value, extra;
	float				con_val;

	str >> date >> delimiter >> value >> extra;
	if (!extra.empty())
	{
		std::cerr << "VALUE: " << "invalid number (extra spaces etc.): " << DEFAULT;
		throw BitcoinExchange::numInvalide(line_no, infile.c_str());
	}
	con_val = this->valueValid(value);
	if (!this->dateValid(date) || !this->Delimite_valid(line) || con_val == -1)
		throw BitcoinExchange::numInvalide(line_no, infile.c_str());
	this->conversionPrint(date, con_val, line_no, infile);
}

bool BitcoinExchange::validateHeading(std::string line)
{
	if (line != "date | value")
		return (false);
	return (true);
}

void BitcoinExchange::convert(std::string infile)
{
	std::ifstream	collect(infile.c_str());

	if(collect.fail())
	{
		collect.close();
		throw BitcoinExchange::invalidFileIs(infile.c_str());
	}
	std::string line;
	getline(collect, line);
	if (!this->validateHeading(line))
	{
		collect.close();
		throw BitcoinExchange::FormatIsInvalid(infile.c_str());
	}
	int line_no = 2;
	while (!collect.eof())
	{
		getline(collect, line);
		try
		{
			this->split(line, infile, line_no);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		line_no++;
	}
	collect.close();
}

BitcoinExchange::invalidFileIs::invalidFileIs(const char * infile)
{
	std::string append = infile;
	append =  append + DEFAULT;
	std::string msg = "Could not open or invalid file: " + append;
	this->_msg = msg.c_str();
	std::cerr << this->_msg;
}

const char * BitcoinExchange::invalidFileIs::what() const throw()
{
	return ("");
}

BitcoinExchange::FormatIsInvalid::FormatIsInvalid(const char * infile)
{
	std::string append = infile;
	append =  append + DEFAULT;
	std::string msg = "File: \"" + append \
	+ "\" contains an invalid format, which should be \"date | value\"";
	this->_msg = msg.c_str();
	std::cerr << this->_msg;
	
}

const char * BitcoinExchange::FormatIsInvalid::what() const throw()
{
	return ("");
}

BitcoinExchange::numInvalide::numInvalide(int ln, const char * infile)
{
	std::stringstream convert;
	std::string append_n;
	convert << ln;
	convert >> append_n;
	std::string append_s = infile;
	append_s =  append_s + DEFAULT;
	std::string msg = "Error found in: \"" + append_s \
	+ "\" file, specifically at line: " + append_n;
	this->_msg = msg.c_str();
	std::cerr << this->_msg;
}

const char * BitcoinExchange::numInvalide::what() const throw()
{
	return ("");
}

float BitcoinExchange::valueValid(std::string value)
{
	float rate = atof(value.c_str());
	
	if (value[0] == '.')
	{
		std::cerr << "VALUE: only decimal point found: " << DEFAULT;
		return (-1);
	}
	if (rate < 0)
	{
		std::cerr << "VALUE: negative value: " << DEFAULT;
		return (-1);
	}
	else if (rate > 1000)
	{
		std::cerr << "VALUE: " << "value above 1000: " << DEFAULT;
		return (-1);
	}
	return (rate);
		
}


BitcoinExchange::~BitcoinExchange()
{
	
}
