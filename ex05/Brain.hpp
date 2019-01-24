/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:00:32 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/23 20:00:35 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain {
public:
    std::string _emotion;
    std::string _address;

    std::string identify(void);
    std::string getAddress(void);

    Brain(void){
        _address = getAddress();
        _emotion = "normal";
    }
    Brain(std::string emotion) {
        _emotion = emotion;
        _address = getAddress();
    }
    ~Brain() { }
};

#endif
