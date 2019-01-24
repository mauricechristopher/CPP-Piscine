/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 19:59:03 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/23 19:59:07 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main() {
    ZombieEvent event;
    Zombie *zombie;

    event.setZombieType("irregular");
    zombie = event.newZombie("dude");
    zombie->announce();
    delete zombie;
    std::cout << "\n";
    for (int i = 0; i < 5; i++)
    {
        zombie = event.randomChump();
        delete zombie;
    }
    return 0;
}
