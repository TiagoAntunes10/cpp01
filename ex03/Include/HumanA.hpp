/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 22:21:18 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/08 12:51:54 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "./Weapon.hpp"

class HumanA {
	public:
		HumanA( std::string name, Weapon &weapon ):	_weapon(weapon), _name(name) { };
		void	attack( void );

	private:
		Weapon		&_weapon;
		std::string	_name;
	
};

#endif
