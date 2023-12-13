/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:24:14 by babels            #+#    #+#             */
/*   Updated: 2023/12/13 17:19:14 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.Class.hpp"
#include "ClapTrap.Class.hpp"

ScavTrap::ScavTrap(void)
{
    return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap Constructor called" << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = src;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hit_points = rhs._hit_points;
        this->_energy_points = rhs._energy_points;
        this->_attack_damage = rhs._attack_damage;
    }
    return (*this);
}

void ScavTrap::attack(std::string const &target)
{
    if (_energy_points == 0)
        std::cout << "ScavTrap " << this->_name << " is out of energy !" << std::endl;
    else if (_energy_points > 0)
    {
        std::cout << "ScavTrap " << this->_name << " attack a dangerous " << target << ", causing incredible " << this->_attack_damage << " points of damage!" << std::endl;
        std::cout << "ScavTrap " << this->_name << " have now " << --_energy_points << " point energy !" << std::endl;
    }
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}