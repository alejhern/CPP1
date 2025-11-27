/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:26:04 by alejhern          #+#    #+#             */
/*   Updated: 2025/11/27 19:26:07 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fstream>
#include <iostream>
#include <string>

using namespace	std;

static int	openstreams(const string &filename, ifstream &input_file,
		ofstream &output_file)
{
	input_file.open(filename.c_str());
	if (!input_file)
	{
		cout << "Error: Could not open file " << filename << endl;
		return (1);
	}
	output_file.open((filename + ".replace").c_str());
	if (!output_file)
	{
		cout << "Error: Could not create file " << filename << ".replace" << endl;
		return (1);
	}
	return (0);
}

static void	replace_word(const string &s1, const string &s2,
		ifstream &input_file, ofstream &output_file)
{
	string	line;
	size_t	pos;

	while (getline(input_file, line))
	{
		pos = 0;
		while (!s1.empty() && (pos = line.find(s1, pos)) != string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		output_file << line << endl;
	}
}

int	main(int argc, char **argv)
{
	string		filename;
	string		s1;
	string		s2;
	ifstream	input_file;
	ofstream	output_file;

	if (argc != 4)
	{
		cout << "Usage: " << argv[0] << " <filename> <string1> <string2>" << endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (openstreams(filename, input_file, output_file))
		return (1);
	replace_word(s1, s2, input_file, output_file);
	input_file.close();
	output_file.close();
	return (0);
}
