/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:00:15 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/23 20:00:17 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN!";
    std::string *ptr;
    std::string ref;

    ptr = &str;
    ref = str;
    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;
}
