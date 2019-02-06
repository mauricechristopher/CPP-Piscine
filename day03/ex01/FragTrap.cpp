/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 21:40:15 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/25 22:19:22 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) {
            this->_name = name;
            this->_hitPoints = 100;
            this->_maxHitPoints = 100;
            this->_energyPoints = 100;
            this->_maxEnergyPoints = 100;
            this->_level = 1;
            this->_meleeAttackDamage = 30;
            this->_rangedAttackDamage = 20;
            this->_armorDamageReduction = 5;
            this->_vaulhunterDamagePoints = 50;
            this->_furyAttackDamagePoints = 10;
            this->_joyAttackDamagePoints = 10;
            this->_loveAttackDamagePoints = 10;
            this->_disgustAttackDamagePoints = 10;
            this->_laserAttackDamagePoints = 10;
            std::cout << this->_name << ": Look out everybody! Things are about to get awesome!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "I have many regrets!" << std::endl;
    return ;
}

void FragTrap::rangedAttack(std::string const & target) {
    std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing " << _rangedAttackDamage << " points of damage !" << std::endl;
    return ;
}

void FragTrap::meleeAttack(std::string const &target) {
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with melee, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
    return ;
}

void FragTrap::takeDamage(unsigned int amount) {
    unsigned int    damage;

    damage = amount - this->_armorDamageReduction;
    if (damage > this->_hitPoints) {
        this->_hitPoints = 0;
        std::cout << this->_name << ": The robot is dead, long live the robot!" << std::endl;
    } else {
        this->_hitPoints -= damage;
        std::cout << this->_name << ": My robotic flesh! AAHH" << std::endl;
        std::cout << "armor reduction: " << this->_armorDamageReduction << std::endl;
        std::cout << "Damage taken: " << damage << std::endl;
        std::cout << "HP left: " << this->_hitPoints << " / " << this->_maxHitPoints << std::endl;
    }
    return ;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints < amount) {
        std::cout << this->_name << ": Energy...reserved..low...owowowowo" << std::endl;
    } else {
        this->_energyPoints -= amount;
        this->_hitPoints = amount + this->_hitPoints;
        std::cout << this->_name << ": Just like new" << std::endl;
        std::cout << "HP points: " << this->_hitPoints << std::endl;
    }
    std::cout << "Energy points left: " << this->_energyPoints << std::endl;
    return ;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
  int   random;

  if (this->_energyPoints < 25) {
        std::cout << this->_name << ": I need more energy... >.<" << std::endl;
        std::cout << "Energy points needed: " << 25 - this->_energyPoints \
                  << std::endl;
  } else {
        this->_energyPoints -= 25;
        srand(time(NULL));
        random = rand() % 5;
        if (random == 0)
            FragTrap::furyAttack(target);
        else if (random == 1)
            FragTrap::joyAttack(target);
        else if (random == 2)
            FragTrap::loveAttack(target);
        else if (random == 3)
            FragTrap::disgustAttack(target);
        else
            FragTrap::disgustAttack(target);
  }
  return ;
}

void FragTrap::furyAttack(std::string const &target) {
    this->_vaulhunterDamagePoints = this->_furyAttackDamagePoints;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with fury, causing " << this->_furyAttackDamagePoints << " points of damage !" << std::endl;
    return ;
}

void FragTrap::joyAttack(std::string const &target) {
    this->_vaulhunterDamagePoints = this->_joyAttackDamagePoints;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with a joy, causing " << this->_joyAttackDamagePoints << " points of damage !" << std::endl;
    return ;
}

void FragTrap::loveAttack(std::string const &target) {
    this->_vaulhunterDamagePoints = this->_loveAttackDamagePoints;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with love, causing " << this->_loveAttackDamagePoints << " points of damage !" << std::endl;
    return ;
}

void FragTrap::disgustAttack(std::string const &target) {
    this->_vaulhunterDamagePoints = this->_disgustAttackDamagePoints;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with disgust, causing " << this->_disgustAttackDamagePoints << " points of damage !" << std::endl;
    return ;
}

void FragTrap::laserAttack(std::string const &target) {
    this->_vaulhunterDamagePoints = this->_laserAttackDamagePoints;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with a laser, causing " << this->_laserAttackDamagePoints << " points of damage !" << std::endl;
    return ;
}

std::string FragTrap::getName(void) {
    return (this->_name);
}

int FragTrap::getMeleeAttackDamage(void) {
    return (this->_meleeAttackDamage);
}

int FragTrap::getRangedAttackDamage(void) {
    return (this->_rangedAttackDamage);
}

int FragTrap::getarmorDamageReduction(void) {
    return (this->_armorDamageReduction);
}

int FragTrap::getVaulHunter_dot_exeDamage(void) {
    return (this->_vaulhunterDamagePoints);
}