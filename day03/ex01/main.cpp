/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 21:40:30 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/25 22:19:20 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include "ScavTrap.hpp"

int main(void) {
    std::cout << "BATTLE CRY"<< std::endl;
    ScavTrap    peach("Peach");
    ScavTrap    captain_falcon("Captain Falcon");

    std::cout << std::endl << "ROUND 1" << std::endl;
    peach.meleeAttack(captain_falcon.getName());
    captain_falcon.takeDamage(peach.getMeleeAttackDamage());

    std::cout << std::endl << "ROUND 2" << std::endl;
    captain_falcon.rangedAttack(peach.getName());
    peach.takeDamage(captain_falcon.getRangedAttackDamage());

    std::cout << std::endl << "ROUND 3" << std::endl;
    peach.challengeNewcomer(captain_falcon.getName());
	
    return (0);
}