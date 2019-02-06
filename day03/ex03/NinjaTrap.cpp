/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 22:18:33 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/25 22:40:17 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

static void attackMessage(std::string name, std::string const &target, int damage_points, std::string msg) {
    std::cout << "NIJ4-TP " << name << " beats " << target << msg << damage_points << " points of damage !" << std::endl;
}

/*
** Constructors and destructors
*/

NinjaTrap::NinjaTrap(void) {
	return ;
}

NinjaTrap::NinjaTrap(std::string name) {
	std::cout << "Enterrrrr the CHAMPION!" << std::endl;
	this->_name = name;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamagePoints = 60;
	this->_rangedAttackDamagePoints = 5;
	this->_armorDamageReductionPoints = 0;
	return ;
}

NinjaTrap::~NinjaTrap(void) {
	return ;
}


void NinjaTrap::meleeAttack(std::string const &target) {
	attackMessage(this->_name, target, this->_meleeAttackDamagePoints, " Step right up, to the Bulletnator 9000! ");
    return ;
}

void NinjaTrap::rangedAttack(std::string const &target) {
	attackMessage(this->_name, target, this->_meleeAttackDamagePoints, " I'm a robot ninja.. ");
    return ;
}

void NinjaTrap::ninjaShoebox(ScavTrap& scav) {
  	std::cout << this->_name << ": I SCAVenge you, " << scav.getName() << "... I don't even lol" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap& clap) {
	std::cout << this->_name << ": Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew " << clap.getName() << "..." << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap& frag) {
	std::cout << this->_name << ": Score one for the turret-trap! " << frag.getName() << "?" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap& ninja) {
	std::cout << this->_name << ": Ready for the PUNCHline?! " << ninja.getName() << std::endl;
}
