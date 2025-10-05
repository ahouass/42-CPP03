/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:03:31 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/12 13:46:52 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class	ClapTrap
{
	protected:
		std::string		name;
		unsigned int	hit_pts;
		unsigned int	energy_pts;
		unsigned int	attack_pts;
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& copy );
		ClapTrap&	operator=( const ClapTrap& copy );
		~ClapTrap( void );
		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};
