/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:00:56 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/23 20:00:58 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int main()
{
    Brain brain("irregular");
    Human human(brain);

    std::cout << brain.identify() << " " << brain._emotion << std::endl;
    std::cout << human._brain.identify() << " " << brain._emotion << std::endl;
    brain._emotion = "regular";
    std::cout << brain.identify() << " " << brain._emotion << std::endl;
    std::cout << human._brain.identify() << " " << brain._emotion << std::endl;
}
