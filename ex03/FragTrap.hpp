/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:06:59 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/12 18:58:45 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap ( std::string _name );
		FragTrap ( const FragTrap& copy );
		FragTrap&	operator=( const FragTrap& copy );
		~FragTrap( void );
		void	highFivesGuys( void );
};