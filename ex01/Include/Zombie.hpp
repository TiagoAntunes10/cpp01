/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:20:16 by tialbert          #+#    #+#             */
/*   Updated: 2025/02/28 21:53:01 by tialbert         ###   ########.fr       */
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
		~Zombie ( void );
	
	private:
		std::string	_name;
};

Zombie *zombieHorde( int N, std::string name );

#endif
