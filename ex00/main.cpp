/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:15:08 by babels            #+#    #+#             */
/*   Updated: 2023/12/13 13:55:33 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.Class.hpp"

int main(void)
{
    ClapTrap claptrap("Salope");

    claptrap.attack("Skag");
    claptrap.takeDamage(1);
    claptrap.beRepaired(1);
    return (0);
}
