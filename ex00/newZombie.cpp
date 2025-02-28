/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:59:18 by tialbert          #+#    #+#             */
/*   Updated: 2025/02/28 15:59:52 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/Zombie.hpp"

Zombie	*newZombie( std::string name ) {
	Zombie	*zombie;

	zombie = new (std::nothrow) Zombie (name);
	if (zombie == NULL) {
		std::cout << "Error: Memory allocation failed" << std::endl;
		exit(1);
	}
	return (zombie);
}
