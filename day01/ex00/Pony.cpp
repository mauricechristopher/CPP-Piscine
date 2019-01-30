/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 12:56:09 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/23 12:56:10 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony    ponyOnTheStack(std::string color, std::string haircut) {
    Pony pony1(color, haircut);
    return (pony1);
}

Pony    *ponyOnTheHeap(std::string color, std::string haircut) {
    Pony *pony2 = new Pony(color, haircut);
    return (pony2);
}