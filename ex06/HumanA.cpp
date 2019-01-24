/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:01:06 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/24 00:02:54 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void        HumanA::setWeapon(Weapon weapon)
{
    this->_weapon = weapon;
}

void        HumanA::attack(void)
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
