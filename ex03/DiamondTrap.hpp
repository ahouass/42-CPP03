/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:09:21 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/12 19:41:27 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	name;
	public:
		DiamondTrap( void );
		DiamondTrap( std::string _name );
		DiamondTrap( const DiamondTrap& copy );
		DiamondTrap&	operator=( const DiamondTrap& copy );
		~DiamondTrap( void );
		void	attack( const std::string &target );
		void	whoAmI( void );
};