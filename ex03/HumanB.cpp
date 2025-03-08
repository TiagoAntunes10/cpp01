/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:40:10 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/08 12:52:24 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./Include/includes.hpp"

HumanB::HumanB( std::string name ) {
	_name = name;
	_weapon = NULL;
}

void	HumanB::attack( void ) {
	if (_weapon == NULL) {
		std::cout << _name << "doesn't have a weapon!" << std::endl;
		return ;
	}
	std::cout << _name << " attacks with their " << _weapon->getType();
	std::cout << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon ) {
	_weapon = &weapon;
}
