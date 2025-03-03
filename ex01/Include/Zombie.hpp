/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:20:16 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/02 14:21:37 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include "stdlib.h"

class Zombie {

	public:
		void	initialise( std::string );
		void	announce( void );
		Zombie ( std::string name);
		~Zombie ( void );
	
	private:
		std::string	_name;
};

Zombie *zombieHorde( int N, std::string name );

#endif
