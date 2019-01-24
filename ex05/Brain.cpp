/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:00:23 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/23 20:00:25 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string Brain::getAddress(void)
{
    std::stringstream str;

    str << std::hex << this;
    return (str.str());
}

std::string Brain::identify(void)
{
    return (_address);
}
