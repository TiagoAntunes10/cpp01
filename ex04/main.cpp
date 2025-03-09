/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:55:28 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/09 12:21:05 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/include.hpp"

static bool	make_file(std::string file, char **argv) {
	std::ofstream	file_cpy;
	size_t			i;
	size_t			word_pos;
	std::string		new_file_name;
	const char		*new_name;

	new_file_name = *argv;
	new_file_name.append(".replace");
	new_name = new_file_name.c_str();
	file_cpy.open(new_name, std::ios::trunc);
	if (!file_cpy.is_open())
		return (false);
	argv++;
	i = 0;
	while (i < file.length()) {
		word_pos = file.find(argv[0], i);
		if (word_pos != std::string::npos) {
			file_cpy << file.substr(i, word_pos - i);
			file_cpy << argv[1];
			i += (word_pos - i) + strlen(argv[0]);
		}
		else {
			file_cpy << file.substr(i, file.length() - i);
			break ;
		}
	}
	file_cpy.close();
	return (true);
}

int	main(int argc, char **argv) {
	std::ifstream	file;
	char			*memblock;
	std::streampos	size;

	if (argc != 4) {
		std::cout << "Not enough arguments!" << std::endl;
		return (1);
	}

	argv++;
	file.open(*argv, std::ios::ate);
	if (!file.is_open()) {
		std::cout << "Error opening file " << *argv << std::endl;
		return (1);
	}

	size = file.tellg();	
	memblock = new (std::nothrow) char[size];
	if (memblock == NULL) {
		file.close();
		return (1);
	}
	file.seekg(0, std::ios::beg);
	file.read(memblock, size);
	file.close();

	if (!make_file(memblock, argv)) {
		std::cout << "Error creating file." << std::endl;
		return (1);
	}
	
	return (0);
}
