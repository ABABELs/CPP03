/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:24:14 by babels            #+#    #+#             */
/*   Updated: 2023/12/13 18:10:56 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.Class.hpp"

ClapTrap::ClapTrap(void) : _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << "ClapTrap Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hit_points = rhs._hit_points;
        this->_energy_points = rhs._energy_points;
        this->_attack_damage = rhs._attack_damage;
    }
    return (*this);
}


ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage! You have Now: " << (_hit_points -= amount) << " hit points !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " be repaired of " << amount << " points of damage! You have now: " << (_hit_points += amount) << " hit points and " << (--_energy_points) << " point energy !" << std::endl;
}

int ClapTrap::getHitPoints(void) const
{
    return (_hit_points);
}

std::string ClapTrap::getName(void) const
{
    return (_name);
}
