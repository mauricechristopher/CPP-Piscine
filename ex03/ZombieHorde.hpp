/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:00:04 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/24 00:02:43 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieHorde {
public:
    Zombie *horde[];

    Zombie *randomChump();

    ZombieHorde(int n) {
        if (n >= 1)
        {
            for (int i = 0; i < n; i++)
            {
                horde[i] = randomChump();
                horde[i]->announce();
            }
        }
    }
    ~ZombieHorde();
};

#endif
