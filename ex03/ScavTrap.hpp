/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:43:08 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/12 18:58:40 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap ( std::string _name );
		ScavTrap( const ScavTrap& copy );
		ScavTrap&	operator=( const ScavTrap& copy );
		~ScavTrap( void );
		void	attack( const std::string& target );
		void	guardGate( void );
};
