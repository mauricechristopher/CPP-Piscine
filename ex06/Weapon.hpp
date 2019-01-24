/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:01:39 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/23 20:01:40 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
private:
    std::string _type;
public:

    const std::string& getType(void);
    void  setType(std::string weapon);

    Weapon(void) {
         setType("crude spiked club");
    }
    Weapon(std::string type) {
        setType(type);
    }
    ~Weapon(void) { };
};

#endif
