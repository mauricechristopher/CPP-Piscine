/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:01:15 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/24 00:02:57 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void        HumanB::attack(void)
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

void        HumanB::setWeapon(Weapon weapon)
{
    this->_weapon = weapon;
}
