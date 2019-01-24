/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:01:26 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/24 00:02:59 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    Weapon weapon;
    weapon.setType("some other type of club");
    HumanA a;
    HumanB b("Frank", weapon);

    a.attack();
    b.attack();
    return 0;
}
