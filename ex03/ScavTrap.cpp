/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:58:39 by truello           #+#    #+#             */
/*   Updated: 2024/05/06 15:10:19 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Foo", 100, 50, 20)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string p_name, int p_hp, int p_ep, int p_atkdmg) : ClapTrap(p_name, p_hp, p_ep, p_atkdmg)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ref) : ClapTrap(ref)
{
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode!" << std::endl;
}

void ScavTrap::attack(std::string &target)
{
	if (this->_ep > 0 && this->_hp > 0)
	{
		this->_ep--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_atkdmg << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " can't do anything right now!" << std::endl;
}
