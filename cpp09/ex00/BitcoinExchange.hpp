/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:32:17 by abalhamm          #+#    #+#             */
/*   Updated: 2024/03/15 16:56:55 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <stdlib.h>
# include <iomanip>
# include <map>
# include <exception>
# include <sstream>
# include <string>

# define DEFAULT	"\033[0m"
# define RED		"\033[1;31m"
# define GREEN		"\033[1;32m"
# define YELLOW		"\033[1;33m"
# define PURPLE		"\033[0;35m"
# define CYAN		"\033[1;36m"

class BitcoinExchange
{
	private:

		std::map<std::string, float> _rate; 
	
	class invalidFileIs: public std::exception
	{
		private:
		
		const char *	_msg;
		
		public:
		
		invalidFileIs(const char * infile);
		const char * what() const throw();
		
	};

	class FormatIsInvalid : public std::exception
	{
		private:

		const char *	_msg;
		
		public:
		
		FormatIsInvalid(const char * infile);
		const char * what() const throw();
		
	};
	
	class numInvalide : public std::exception
	{
		private:

		const char *	_msg;
		
		public:
		
		numInvalide(int ln, const char * infile);
		const char * what() const throw();
		
	};

	public:
		BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const & copy);
		BitcoinExchange & operator=(BitcoinExchange const & rhs);
		~BitcoinExchange(void);
		
		BitcoinExchange(std::string infile);
		void		readFile();
		void		convert(std::string infile);
		bool		validateHeading(std::string line);
		void		split(std::string line, std::string infile, int line_no);
		float		valueValid(std::string value);
		bool		dateValid(std::string date);
		bool		Delimite_valid(std::string line);
		void		conversionPrint(std::string date, float con_val, int line_no, std::string infile);
		std::string	nearestDate(std::string date, int line_no, std::string infile);
		
};

#endif