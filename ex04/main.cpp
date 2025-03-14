/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:55:28 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/14 23:30:37 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/include.hpp"

static bool	make_file(std::string file, char **argv) {
	std::ofstream	file_cpy;
	size_t			i;
	size_t			word_pos;
	std::string		new_file_name;
	const char		*new_name;

	if (**argv == 0)
		return (false);
	new_file_name = *argv;
	new_file_name.append(".replace");
	new_name = new_file_name.c_str();
	file_cpy.open(new_name, std::ios::trunc);
	if (!file_cpy.is_open())
		return (false);

	if (file.empty() == true) {
		file_cpy.close();
		return (true);
	}

	argv++;
	i = 0;
	while (i < file.length()) {
		word_pos = file.find(argv[0], i);
		if (word_pos != std::string::npos) {
			file_cpy << file.substr(i, word_pos - i);
			if (*argv[1] != 0)
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
	unsigned int	size;

	if (argc < 4) {
		std::cout << "Not enough arguments!" << std::endl;
		return (1);
	}
	else if (argc > 4) {
		std::cout << "Too many arguments!" << std::endl;
		return (1);
	}

	argv++;
	file.open(*argv, std::ios::ate);
	if (!file.is_open()) {
		std::cout << "Error opening file " << *argv << std::endl;
		return (1);
	}
	if (*argv[1] == 0) {
		std::cout << "Argument cannot be an empty string" << std::endl;
		return (1);
	}

	file.seekg(0, std::ios::end);
	size = (unsigned int) file.tellg();	
	if ((unsigned int) size > 0) {
		memblock = new (std::nothrow) char[(unsigned int) size + 1];
		if (memblock == NULL) {
			file.close();
			return (1);
		}
		file.seekg(0, std::ios::beg);
		file.getline(memblock, (unsigned int) size + 1, 0);
		file.close();

		if (!make_file(memblock, argv)) {
			std::cout << "Error creating file." << std::endl;
			delete[] memblock;
			return (1);
		}
		delete[] memblock;
	}
	else {
		file.close();
		if (!make_file("", argv)) {
			std::cout << "Error creating file." << std::endl;
			return (1);
		}
	}
	
	return (0);
}
