/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 20:40:22 by mchristo          #+#    #+#             */
/*   Updated: 2019/02/05 21:20:25 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
    std::cout << "BATTLE CRY"<< std::endl;
    FragTrap    peach("Peach");
    FragTrap    captain_falcon("Captain Falcon");

    std::cout << std::endl << "ROUND 1" << std::endl;
    peach.meleeAttack(captain_falcon.getName());
    captain_falcon.takeDamage(peach.getMeleeAttackDamage());

    std::cout << std::endl << "ROUND 2" << std::endl;
    captain_falcon.rangedAttack(peach.getName());
    peach.takeDamage(captain_falcon.getRangedAttackDamage());

    std::cout << std::endl << "ROUND 3" << std::endl;
    peach.vaulthunter_dot_exe(captain_falcon.getName());
    captain_falcon.takeDamage(peach.getVaulHunter_dot_exeDamage());
	
    return (0);
}