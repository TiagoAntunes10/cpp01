/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 22:21:23 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/08 12:52:17 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "./Weapon.hpp"

class HumanB {
	public:
		HumanB( std::string name );
		void	attack( void );
		void	setWeapon( Weapon &weapon );

	private:
		Weapon		*_weapon;
		std::string	_name;
	
};

#endif

