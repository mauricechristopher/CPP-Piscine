/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:00:49 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/24 00:02:51 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Human {
public:
    Brain _brain;

    std::string getBrain();
    Human(Brain brain) {
        _brain = brain;
    }
    ~Human() { }
};

#endif
