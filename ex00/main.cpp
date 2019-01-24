/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 12:56:23 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/23 21:31:01 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int     main() {
    std::string command1;
    std::string command2;
    std::string color;
    std::string haircut;
    Pony *pony1;
    Pony pony2;

    std::cout << "Welcome to the Heap of Quadrupeds!" << std::endl << std::endl;
    
    while (1) {
        std::cout << "Would you like to save to the 'heap' or 'stack'? Type 'exit' to exit" << std::endl;
        std::cin >> command2;
        if (command2 == "heap") {
            pony1 = new Pony();
            std::cout << "What color is your horse?\n";
            std::cin >> pony1->_color;
            std::cout << "What kind of haircut does it have?\n";
            std::cin >> pony1->_haircut;
            std::cout << std::endl << "Your Pony is the color " << pony1->_color << " and it has " << pony1->_haircut << " hair" << std::endl << std::endl;
            delete pony1;
            std::cout << "Deleted pony1\n\n";
        }
        else if (command2 == "stack") {
            std::cout << "What color is your horse?\n";
            std::cin >> pony2._color;
            std::cout << "What kind of haircut does it have?\n";
            std::cin >> pony2._haircut;
            std::cout << std::endl << "Your Pony is the color " << pony2._color << " and it has " << pony2._haircut << " hair" << std::endl << std::endl; << std::endl;
        }
        else if ("exit" == command2) {
            exit(1);
        }
        else {
            std::cout << "Please enter heap or stack\n";
        }
    }
}