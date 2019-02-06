/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 21:40:22 by mchristo          #+#    #+#             */
/*   Updated: 2019/02/05 21:20:57 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

# include <string>
# include <iostream>

class FragTrap {
    public:
        FragTrap(std::string name);
        ~FragTrap();
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName(void);
        void vaulthunter_dot_exe(std::string const &target);
        void furyAttack(std::string const &target);
        void joyAttack(std::string const &target);
        void loveAttack(std::string const &target);
        void disgustAttack(std::string const &target);
        void laserAttack(std::string const &target);
        int getMeleeAttackDamage(void);
        int getRangedAttackDamage(void);
        int getarmorDamageReduction(void);
        int getVaulHunter_dot_exeDamage(void);
        int getFuryAttackDamage(void);

    private:
        int _hitPoints;
        int _maxHitPoints;
        int _energyPoints;
        int _maxEnergyPoints;
        int _level;
        std::string _name;
        int _meleeAttackDamage;
        int _rangedAttackDamage;
        int _armorDamageReduction;
        int  _vaulhunterDamagePoints;
        int  _furyAttackDamagePoints;
        int  _joyAttackDamagePoints;
        int  _loveAttackDamagePoints;
        int  _disgustAttackDamagePoints;
        int  _laserAttackDamagePoints;
};

#endif