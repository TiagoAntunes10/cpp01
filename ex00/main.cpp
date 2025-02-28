/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:20:19 by tialbert          #+#    #+#             */
/*   Updated: 2025/02/28 16:00:25 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/Zombie.hpp"

int	main(void) {
	Zombie	*heap_zombie;

	randomChump("Zacarias");
	heap_zombie = newZombie("Ze");
	heap_zombie->announce();
	heap_zombie->announce();
	delete heap_zombie;
}
