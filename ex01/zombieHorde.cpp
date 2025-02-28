/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 17:02:36 by tialbert          #+#    #+#             */
/*   Updated: 2025/02/28 21:54:08 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/Zombie.hpp"

Zombie *zombieHorde( int N, std::string name ) {
	Zombie	*zombies;

	zombies = new (std::nothrow) Zombie[N];
	if (zombies == NULL) {
		std::cout << "Error: Memory allocation failed" << std::endl;
		exit(1);
	}
	for (int i = 0; i < N; i++)
		zombies[i].initialise(name);
	return (zombies);
}
