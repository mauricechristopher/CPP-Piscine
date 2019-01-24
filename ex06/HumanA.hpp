/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:01:11 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/23 20:01:46 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
public:
    Weapon _weapon;
    std::string _name;

    void        attack(void);
    void        setWeapon(Weapon weapon);

    HumanA(void) {
        _name = "Frank";
    }
    HumanA(std::string name, Weapon weapon) {
        _name = name;
        weapon = weapon;
    }
    ~HumanA(void) { };
};

#endif
