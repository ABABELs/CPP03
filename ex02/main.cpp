/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:15:08 by babels            #+#    #+#             */
/*   Updated: 2024/01/11 13:20:25 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.Class.hpp"
#include "ScavTrap.Class.hpp"
#include "FragTrap.Class.hpp"

int main(void)
{
    FragTrap Frag("Frag Guy");
    // ScavTrap Scav("Scav Guy");
    // ClapTrap Clap("Clap Guy");
    
    while (Frag.getHitPoints() > 0)
    {
        // Clap.attack("Skag");
        // Clap.takeDamage(3);
        // Clap.beRepaired(2);
        // Scav.attack("HUMAN");
        // Scav.takeDamage(10);
        // Scav.beRepaired(5);
        // Scav.guardGate();
        Frag.choose_Name_Ennemy("Skag");
        Frag.attack("ScavTrap");
        Frag.highFivesGuys();
        Frag.takeDamage(30);
        if (Frag.getHitPoints() < 0)
            std::cout << Frag.getName() << " Was Died for a few time! Fortunetly you use your guard Gate :D !" << std::endl;
    }
    return (0);
}
