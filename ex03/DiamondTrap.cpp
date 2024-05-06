/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:26:37 by truello           #+#    #+#             */
/*   Updated: 2024/05/06 14:59:29 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : FragTrap(), ScavTrap()
{
	this->_name = "Foo";
	ClapTrap::_name = "Foo_clap_name";
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_atkdmg = FragTrap::_atkdmg;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string p_name, int p_hp, int p_ep, int p_atk)
	: FragTrap(p_name, p_hp, p_ep, p_atk), ScavTrap(p_name, p_hp, p_ep, p_atk)
{
	this->_name = p_name;
	ClapTrap::_name = std::string(p_name + "_clap_name");
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_atkdmg = FragTrap::_atkdmg;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "Name : " << this->_name << " ClapTrap name : " << ClapTrap::_name << std::endl;
}
