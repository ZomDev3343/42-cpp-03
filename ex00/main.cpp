/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:38:22 by truello           #+#    #+#             */
/*   Updated: 2024/05/16 16:05:26 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap cp;
	ClapTrap billy("Billy", 20, 3, 3);

	cp.attack("Billy");
	billy.takeDamage(3);
	billy.beRepaired(1);
	cp.takeDamage(6);
	billy.attack("Foo");

	billy.takeDamage(10);
	billy.attack("Foo");
	cp.takeDamage(3);
}
