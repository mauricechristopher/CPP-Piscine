/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 19:59:31 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/24 00:02:35 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
    ZombieHorde *horde;
    int n = 5;

    horde = new ZombieHorde(n);
    std::cout << "\nHorde created!\nPrinting horde!\n\n";
    for (int i = 0; i < n; i++)
        horde->horde[i]->announce();
    return (1);
}
