/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:20:19 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/04 14:07:19 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/Zombie.hpp"

int	main(void) {
	Zombie	*heap_zombie;
	int		n;

	n = 3;
	heap_zombie = zombieHorde(n, "Ze");
	for (int i = 0; i < n; i++) {
		std::cout << "Zombie " << i << ") ";
		heap_zombie[i].announce();
	}
	delete[] heap_zombie;
}
