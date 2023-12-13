/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:18:37 by babels            #+#    #+#             */
/*   Updated: 2023/12/13 15:18:50 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include "ClapTrap.Class.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &src);
        ScavTrap &operator=(ScavTrap const &rhs);
        ~ScavTrap(void);
        void guardGate(void);
        virtual void attack(std::string const &target);
    private:
        ScavTrap(void);
};

#endif