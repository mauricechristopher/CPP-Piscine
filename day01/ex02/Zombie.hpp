/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 19:58:53 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/24 00:02:26 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
public:
    std::string _type;
    std::string _name;

    char           randomC(void);
    char           randomV(void);
    std::string    randomName(void);
    void           announce(void);

    Zombie(void) {
        _type = "normal";
        _name = randomName();
    }
    Zombie(std::string type, std::string name) {
        _type = type;
        _name = name; 
    }
};

#endif
