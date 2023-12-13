/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:24:14 by babels            #+#    #+#             */
/*   Updated: 2023/12/13 17:43:04 by babels           ###   ########.fr       */
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

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap Destructor called" << std::endl;
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

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage! You have Now: " << this->losepoints(amount, 2) << " hit points and " << this->losepoints(amount, 1) << " point energy !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " be repaired of " << amount << " points of damage! You have now: " << this->gainpoints(amount, 2) << " hit points and " << this->losepoints(amount, 1)<< " point energy !" << std::endl;
}

int ClapTrap::losepoints(int amount, int type)
{
    if (type == 1)
    {
        if (this->_energy_points == 0)
        {
            std::cout << "ClapTrap " << this->_name << " is out of energy !" << std::endl;
            return (0);
        }
        else
            return (this->_energy_points -= amount);
    }
    else
        return (this->_hit_points -= amount);
}

int ClapTrap::gainpoints(int amount, int type)
{
    if (type == 1)
        return (this->_energy_points += amount);
    else
        return (this->_hit_points += amount);
}