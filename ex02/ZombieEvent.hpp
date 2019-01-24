/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 19:58:27 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/24 00:02:32 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>

class ZombieEvent {
private:
    std::string _type;
public:
    void        setZombieType(std::string type);
    Zombie      *newZombie(std::string name);
    Zombie      *randomChump();

    ZombieEvent(void) {
        _type = "regular";
    }
};
 
#endif
