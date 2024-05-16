/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:45:11 by truello           #+#    #+#             */
/*   Updated: 2024/05/16 16:04:21 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_name = "Foo";
	this->_hp = 10;
	this->_ep = 10;
	this->_atkdmg = 0;
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string p_name, int p_hp, int p_ep, int p_atk)
{
	this->_name = p_name;
	this->_hp = p_hp;
	this->_ep = p_ep;
	this->_atkdmg = p_atk;
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	this->_name = ref._name;
	this->_hp = ref._hp;
	this->_ep = ref._ep;
	this->_atkdmg = ref._atkdmg;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_ep > 0 && this->_hp > 0)
	{
		this->_ep--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_atkdmg << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't do anything right now!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	if (this->_hp - amount < 0)
		this->_hp = 0;
	else
		this->_hp -= amount;
	std::cout << "ClapTrap " << this->_name << " took " << amount << " damage! " << "HP: " << this->_hp << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep > 0 && this->_hp > 0)
	{
		this->_ep--;
		this->_hp += amount;
		std::cout << "ClapTrap " << this->_name << " regained " << amount << " HP!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't do anything right now!" << std::endl;
}
