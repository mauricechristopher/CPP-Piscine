/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 12:56:17 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/23 12:56:19 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Pony {
    public:
        std::string _color;
        std::string _haircut;
        Pony(void) {
            _color = "brown";
            _haircut = "straight";
        }
        Pony(std::string color, std::string haircut) {
            _color = color;
            _haircut = haircut;
        }

};

Pony    ponyOnTheStack(std::string color, std::string haircut);
Pony    *ponyOnTheHeap(std::string color, std::string haircut);

