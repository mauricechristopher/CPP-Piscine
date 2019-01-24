/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 19:58:36 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/23 19:59:10 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void  ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    Zombie *zombie;
    zombie = new Zombie(_type, name);
    return (zombie);
}

Zombie *ZombieEvent::randomChump()
{
    Zombie *zombie;
    zombie = new Zombie();
    zombie->announce();
    return (zombie);
}
