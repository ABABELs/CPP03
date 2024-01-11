/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:15:08 by babels            #+#    #+#             */
/*   Updated: 2024/01/11 12:59:14 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.Class.hpp"
#include "ScavTrap.Class.hpp"

int main(void)
{
    ScavTrap ScavTrap("Useless Guy");
    
    while (ScavTrap.getHitPoints() > 0)
    {
        ScavTrap.choose_Name_Ennemy("Skag");
        ScavTrap.attack(ScavTrap.getEnnemyName());
        if (ScavTrap.getHitPoints() < 30)
            ScavTrap.guardGate();
        ScavTrap.takeDamage(30);
        ScavTrap.beRepaired(10);
        if (ScavTrap.getHitPoints() < 0)
            std::cout << ScavTrap.getName() << " Was Died for a few time! Fortunetly you use your guard Gate :D !" << std::endl;
    }
    return (0);
}
