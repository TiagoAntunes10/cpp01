/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 17:02:36 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/02 14:23:09 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/Zombie.hpp"

Zombie *zombieHorde( int N, std::string name ) {
	Zombie	*zombies;

	zombies = new (std::nothrow) Zombie[N] { name };
	if (zombies == NULL) {
		std::cout << "Error: Memory allocation failed" << std::endl;
		exit(1);
	}
	return (zombies);
}
