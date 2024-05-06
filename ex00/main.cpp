/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:38:22 by truello           #+#    #+#             */
/*   Updated: 2024/05/06 13:47:46 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap cp;
	ClapTrap billy("Billy", 20, 3, 3);

	cp.attack("Bob");
	cp.takeDamage(5);
	cp.beRepaired(1);
	cp.takeDamage(6);
	cp.attack("Bob");

	billy.takeDamage(10);
	billy.attack("Bob");
}
