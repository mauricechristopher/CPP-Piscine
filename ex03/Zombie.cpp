/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 19:59:40 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/23 19:59:42 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

char    Zombie::randomC(void)
{
    std::string consonants = "bcdfghjklmnpqrstvwz";
    return (consonants[rand() % 20]);
}

char    Zombie::randomV(void)
{
    std::string vowels = "aeiou";
    return (vowels[rand() % 5]);
}

std::string Zombie::randomName(void)
{
    std::string name = "aaaaaaaaaa";

    for (int i = 0; i < 10; i++) {
        if (i == 0)
            name[i] = randomC();
        else if (i == 1)
            name[i] = randomV();
        else
            name[i] = !(i % 2) ? randomC() : randomV();
    }
    return name;
}


void Zombie::announce(void)
{
    std::cout << "<" << _name << " (" << "normal" << ")> Braiiiiiiinnnnsssss\n";
}
