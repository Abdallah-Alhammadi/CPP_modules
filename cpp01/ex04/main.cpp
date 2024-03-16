/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:19:50 by abalhamm          #+#    #+#             */
/*   Updated: 2023/12/21 12:19:51 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	text_replace(std::ifstream &MyFile, char **argv)
{
	std::string file_name = argv[1];
	std::string find_str = argv[2];
	std::string replace_str = argv[3];
	std::string replace_file = file_name + ".replace";
	std::ofstream rep_file(replace_file.c_str());
	while (!MyFile.eof() && find_str.size())
	{
		std::string	content_str;
		std::string final_str = "";
		std::getline(MyFile, content_str);
		std::size_t pos = content_str.find(find_str);
		while (pos != std::string::npos)
		{
			content_str.erase(pos, find_str.size());
			final_str = final_str + content_str.substr(0, pos);
			final_str = final_str + replace_str;
			content_str = content_str.substr(pos);
			pos = content_str.find(find_str);
		}
		if (content_str.size() && pos == std::string::npos)
			final_str = final_str + content_str.substr(0, pos);
		rep_file << final_str;
		if (!MyFile.eof())
			rep_file << "\n";
	}
	MyFile.close();
	rep_file.close();
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{		
		std::ifstream MyFile(argv[1]);
		if (MyFile)
		{
			if (MyFile.is_open())
				text_replace(MyFile, argv);
			else
				std::cout << "File cannot be opened" << std::endl;
		}
		else
			std::cout << "This file doesn't exist" << std::endl;
	}
	else
		std::cout << "Invalid Arguments" <<std::endl;
}
