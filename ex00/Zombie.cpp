/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:20:18 by tialbert          #+#    #+#             */
/*   Updated: 2025/02/28 15:43:29 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/Zombie.hpp"

Zombie::Zombie (std::string name) {
	_name = name;
}

Zombie::~Zombie (void) {
	std::cout << _name << ": ";
	std::cout << "Bra*POW* *brains splattered all over the walls*" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << _name << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
