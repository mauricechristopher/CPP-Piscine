/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 21:41:02 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/25 22:19:15 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap {
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	~ClapTrap(void);
    void          takeDamage(unsigned int amount);
    void          beRepaired(unsigned int amount);
	void          meleeAttack(std::string const &target);
    void          rangedAttack(std::string const &target);
    void 		  setName(std::string name);
	void 		  setLevel(unsigned int level);
	std::string   getName(void);
    unsigned int  gethitPoints(void);
    unsigned int  getmaxHitPoints(void);
    unsigned int  getenergyPoints(void);
    unsigned int  getmaxEnergyPoints(void);
    unsigned int  getlevel(void);
	unsigned int  getMeleeAttackDamage(void);
	unsigned int  getRangedAttackDamage(void);
	unsigned int  getarmorDamageReduction(void);

protected:
    std::string   _name;
    unsigned int  _hitPoints;
    unsigned int  _maxHitPoints;
    unsigned int  _energyPoints;
    unsigned int  _maxEnergyPoints;
    unsigned int  _level;
	unsigned int  _meleeAttackDamagePoints;
	unsigned int  _rangedAttackDamagePoints;
	unsigned int  _armorDamageReductionPoints;
};

#endif