/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:15:08 by babels            #+#    #+#             */
/*   Updated: 2023/12/13 21:54:07 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.Class.hpp"
#include "ScavTrap.Class.hpp"
#include "FragTrap.Class.hpp"

int main(void)
{
    FragTrap FragTrap("Gentle Guy");
    ScavTrap ScavTrap("Useless Guy");
    
    while (FragTrap.getHitPoints() > 0)
    {
        FragTrap.choose_Name_Ennemy("Skag");
        FragTrap.attack(ScavTrap.getName());
        FragTrap.highFivesGuys();
        FragTrap.takeDamage(30);
        if (FragTrap.getHitPoints() < 0)
            std::cout << FragTrap.getName() << " Was Died for a few time! Fortunetly you use your guard Gate :D !" << std::endl;
    }
    return (0);
}
