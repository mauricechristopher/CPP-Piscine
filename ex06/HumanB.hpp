/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:01:20 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/23 20:01:44 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
public:
    Weapon _weapon;
    std::string _name;

    void        attack(void);
    void        setWeapon(Weapon weapon);

    HumanB(void) {
        _name = "Frank";
    }
    HumanB(std::string name, Weapon weapon) {
        _name = name;
        weapon = weapon;
    }
    ~HumanB(void) { };
};

#endif
