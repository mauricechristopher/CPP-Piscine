/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 19:59:48 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/23 19:59:50 by mchristo         ###   ########.fr       */
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
    ~Zombie();
};

#endif
