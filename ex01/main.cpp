/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:15:08 by babels            #+#    #+#             */
/*   Updated: 2023/12/13 18:16:54 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.Class.hpp"
#include "ScavTrap.Class.hpp"

int main(void)
{
    ScavTrap ScavTrap("Useless Guy");
    
    while (ScavTrap.getHitPoints() > 0)
    {
        ScavTrap.attack("Skag");
        ScavTrap.guardGate();
        ScavTrap.takeDamage(30);
        if (ScavTrap.getHitPoints() < 0)
            std::cout << ScavTrap.getName() << " Was Died for a few time! Fortunetly you use your guard Gate :D !" << std::endl;
    }
    return (0);
}
