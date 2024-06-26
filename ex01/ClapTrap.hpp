/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:36:34 by truello           #+#    #+#             */
/*   Updated: 2024/05/16 16:21:14 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap
{
	protected:
		std::string _name;
		int			_hp;
		int			_ep;
		int			_atkdmg;
	public:
		ClapTrap(void);
		ClapTrap(std::string p_name, int p_hp, int p_ep, int p_atk);
		ClapTrap(const ClapTrap &target);
		~ClapTrap(void);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		int		getHP(void) const;
		int		getEP(void) const;
		int		getAtkDmg(void) const;
		std::string& getName(void);
};

#endif
