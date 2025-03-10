/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:22:46 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/10 22:26:20 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/Harl.hpp"

int	main(void) {
	std::string	level;
	Harl	harl;

	level = "debug";
	harl.complain(level);
	level = "info";
	harl.complain(level);
	level = "warning";
	harl.complain(level);
	level = "error";
	harl.complain(level);
	level = "";
	std::cout << "Invalid level: ";
	harl.complain(level);
}
