/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:18:37 by babels            #+#    #+#             */
/*   Updated: 2023/12/13 18:40:46 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# include <iostream>
# include <string>

class ClapTrap
{
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &src);
        ~ClapTrap(void);

        ClapTrap	&operator=(ClapTrap const &rhs);
        virtual 	void attack(std::string const &target);
        void		takeDamage(unsigned int amount);
        void		beRepaired(unsigned int amount);
        int			getHitPoints(void) const;
		std::string	getName(void) const;
		std::string	getEnnemyName(void) const;
		void		choose_Name_Ennemy(std::string name);
    protected:
        std::string _name;
		std::string _ennemy_name;
        int _hit_points;
        int _energy_points;
        int _attack_damage;
};

#endif