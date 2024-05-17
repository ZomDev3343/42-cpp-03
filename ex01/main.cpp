/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:38:22 by truello           #+#    #+#             */
/*   Updated: 2024/05/17 10:34:33 by tohma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap bob("Bob", 10, 5, 1);
	ScavTrap foo;

	bob.attack(foo.getName());
	foo.takeDamage(bob.getAtkDmg());
	foo.beRepaired(1);
	std::cout << foo.getName() << " is at " << foo.getHP() << " HP" << std::endl;
	foo.guardGate();

	return (0);
}
