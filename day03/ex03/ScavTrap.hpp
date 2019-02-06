/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 22:18:57 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/25 22:40:22 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>

class ScavTrap {
public:
    ScavTrap(void);
    ~ScavTrap(void);
    ScavTrap(std::string);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    void            meleeAttack(std::string const &target);
    void            rangedAttack(std::string const &target);
    void            challengeNewcomer(std::string const &target);
    std::string     getName(void);
    unsigned int    getMeleeAttackDamage(void);
    unsigned int    getRangedAttackDamage(void);
    unsigned int    getarmorDamageReduction(void);
    std::string     getChallenge(void);

private:
    std::string   _name;
    unsigned int  _hitPoints;
    unsigned int  _maxHitPoints;
    unsigned int  _energyPoints;
    unsigned int  _maxEnergyPoints;
    unsigned int  _level;
    unsigned int  _meleeAttackDamagePoints;
    unsigned int  _rangedAttackDamagePoints;
    unsigned int  _armorDamageReductionPoints;
    std::string   _challenge;
};

#endif