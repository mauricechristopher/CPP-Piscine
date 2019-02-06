/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 22:18:26 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/25 22:40:17 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int main(void) {
    std::cout << "BATTLE CRY"<< std::endl;
    NinjaTrap    peach("Peach");
    NinjaTrap    captain_falcon("Captain Falcon");

    std::cout << std::endl << "ROUND 1" << std::endl;
    peach.meleeAttack(captain_falcon.getName());
    captain_falcon.takeDamage(peach.getMeleeAttackDamage());

    std::cout << std::endl << "ROUND 2" << std::endl;
    captain_falcon.rangedAttack(peach.getName());
    peach.takeDamage(captain_falcon.getRangedAttackDamage());

    return (0);
}