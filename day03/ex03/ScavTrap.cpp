/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 22:18:49 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/25 22:40:19 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

static void attackMessage(std::string name, std::string const &target, int damage_points, std::string msg) {
    std::cout << "SC4V-TP " << name << " strikes " << target << msg \
              << damage_points << " points of damage !" << std::endl;
}

ScavTrap::ScavTrap(void) {
    return ;
}

ScavTrap::~ScavTrap(void) {
    return ;
}

ScavTrap::ScavTrap(std::string name) {
    std::cout << "Hi, my name is " << name << " and welcome to your doom. >:)" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_level = 1;
    this->_meleeAttackDamagePoints = 20;
    this->_rangedAttackDamagePoints = 15;
    this->_armorDamageReductionPoints = 3;
    return ;
}

void ScavTrap::meleeAttack(std::string const &target) {
    attackMessage(this->_name, target, this->_meleeAttackDamagePoints, " with a sword, inducing ");
    return ;
}

void ScavTrap::rangedAttack(std::string const &target) {
    attackMessage(this->_name, target, this->_meleeAttackDamagePoints, " with a slingshot, generating ");
    return ;
}

void ScavTrap::takeDamage(unsigned int amount) {
    unsigned int    damage;

    damage = amount - this->_armorDamageReductionPoints;
    if (damage > this->_hitPoints) {
        this->_hitPoints = 0;
        std::cout << this->_name << ": LOL I'm ded already... X_X" << std::endl;
    } else {
        this->_hitPoints -= damage;
        std::cout << this->_name << ": I'm still alive. :D" << std::endl;
        std::cout << "armor reduction: " << this->_armorDamageReductionPoints\
                  << std::endl;
        std::cout << "Damage taken: " << damage << std::endl;
        std::cout << "HP left: " << this->_hitPoints << " / " \
                  << this->_maxHitPoints << std::endl;
    }
    return ;
}

void ScavTrap::beRepaired(unsigned int amount) {
    if (this->_energyPoints < amount) {
        std::cout << this->_name << ": Not enough energy... :(" << std::endl;
    } else {
        this->_energyPoints -= amount;
        this->_hitPoints = amount + this->_hitPoints;
        std::cout << this->_name << ": I'm healing myself... ;)" << std::endl;
        std::cout << "HP points: " << this->_hitPoints << std::endl;
    }
    std::cout << "Energy points left: " << this->_energyPoints << std::endl;
    return ;
}

void ScavTrap::challengeNewcomer(std::string const &target) {
	int         random;
    std::string challenge[] =
    {
        "Clean my toilet",
        "Clean my gutters",
        "Clean my bathtub",
        "Clean my mirrors",
        "Clean my car"
    };

    random = rand() % 5;
	this->_challenge = challenge[random];
    std::cout << this->_name << ": I challenge you to " << this->_challenge << " right now! Good luck, " << target <<  "... Muahahaha :D" << std::endl;
    return ;
}

std::string ScavTrap::getName(void) {
    return (this->_name);
}

unsigned int ScavTrap::getMeleeAttackDamage(void) {
    return (this->_meleeAttackDamagePoints);
}

unsigned int ScavTrap::getRangedAttackDamage(void) {
    return (this->_rangedAttackDamagePoints);
}

unsigned int ScavTrap::getarmorDamageReduction(void) {
    return (this->_armorDamageReductionPoints);
}

std::string ScavTrap::getChallenge(void) {
    return (this->_challenge);
}