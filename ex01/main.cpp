/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:38:22 by truello           #+#    #+#             */
/*   Updated: 2024/05/16 16:20:42 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap bob("Bob", 10, 5, 1);
	ScavTrap billy("Bily", 15, 7, 3);

	bob.attack(billy.getName());
	billy.beRepaired(1);
	billy.guardGate();

	return (0);
}
