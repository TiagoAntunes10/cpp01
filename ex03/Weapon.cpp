/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:35:36 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/04 15:43:45 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/includes.hpp"

Weapon::Weapon( std::string type ) {
	_type = type;
}

const std::string	&Weapon::getType( void ) {
	return (_type);
}

void	Weapon::setType( std::string type ) {
	_type = type;
}

