/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 15:22:06 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/21 15:22:07 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact contacts[8];

Contact AddContact()
{
    std::string _firstName;
    std::cout << "Enter Your First Name                                                                             ";
    std::cin >> _firstName;

    std::string _lastName;
    std::cout << "Enter Your Last Name                                                                              ";
    std::cin >> _lastName;

    std::string _nickname;
    std::cout << "Enter Your Nickname                                                                               ";
    std::cin >> _nickname;

    std::string _login;
    std::cout << "Enter Your Login                                                                                  ";
    std::cin >> _login;

    std::string _postalAddress;
    std::cout << "Enter Your Address                                                                                ";
    std::cin >> _postalAddress;

    std::string _emailAddress;
    std::cout << "Enter Your Email Address so I can use it to win a free Nintendo Switch                            ";
    std::cin >> _emailAddress;

    std::string _phoneNumber;
    std::cout << "Lemme Get Your Number                                                                             ";
    std::cin >> _phoneNumber;

    std::string _birthdate;
    std::cout << "Upon Which Day Did You First Enter The Simulation?                                                ";
    std::cin >> _birthdate;

    std::string _favoriteMeal;
    std::cout << "If You Were on Death Row, What Would Be Your Final Meal?                                          ";
    std::cin >> _favoriteMeal;

    std::string _underwearColor;
    std::cout << "What Color is Your Underwear? (Your Data May or May Not be Sold to the Highest Bidder)            ";
    std::cin >> _underwearColor;

    std::string _darkestSecret;
    std::cout << "Tell me Your Darkest Secret..." << std::endl << "Don't worry, I probably won't use it to blackmail you when you're famous                          ";
    std::cin >> _darkestSecret;

    Contact contact(
            _firstName,
            _lastName,
            _nickname,
            _login,
            _postalAddress,
            _emailAddress,
            _phoneNumber,
            _birthdate,
            _favoriteMeal,
            _underwearColor,
            _darkestSecret
    );
    return (contact);
}

void    printer(std::string str) {
    int spaces = 10 - str.length();
    if (spaces <= 0)
        spaces = 0;
    for (int j = spaces; j > 0; j--)
        std::cout << " ";
    for (int i = 0; i <  10 - spaces; i++) {
        if (str[i] && i == 9 && spaces == 0)
            std::cout << ".";
        else
            std::cout << str[i];
    }
    std::cout << "|";
}

int main () {
    std::cout << "Hi, Welcome to RicePages" << std::endl;

    std::string commands;
    int i = 0;
    int whoDis;

    while(1)
    {
        std::cin >> commands;
        if (commands == "ADD") {
            if (i > 7) {
                std::cout << "Phonebook Overloaded!" << std::endl;
                continue;
            }
            else {
                contacts[i++] = AddContact();
                continue;
            }
        }

        if (commands == "SEARCH") {
            if (i == 0) {
                std::cout << "No Entries to Search!" << std::endl;
                continue;
            }
            for (int j=0; j<i; j++) {
                printer(std::to_string(j));
                printer(contacts[j]._firstName);
                printer(contacts[j]._lastName);
                printer(contacts[j]._nickname);
                std::cout << std::endl;
            }
            std::cout << std::endl << "Who is you looking for" << std::endl;
            std::cin >> whoDis;
            if (std::cin.good() && (whoDis < i && whoDis >= 0))
                {
                    std::cout << "First Name:       " << contacts[whoDis]._firstName << std::endl;
                    std::cout << "Last Name:        " << contacts[whoDis]._lastName << std::endl;
                    std::cout << "Nickname:         " << contacts[whoDis]._nickname << std::endl;
                    std::cout << "Login:            " << contacts[whoDis]._login << std::endl;
                    std::cout << "Address:          " << contacts[whoDis]._postalAddress << std::endl;
                    std::cout << "Email:            " << contacts[whoDis]._emailAddress << std::endl;
                    std::cout << "Phone #:          " << contacts[whoDis]._phoneNumber << std::endl;
                    std::cout << "Birthday:         " << contacts[whoDis]._birthdate << std::endl;
                    std::cout << "Favorite Meal:    " << contacts[whoDis]._favoriteMeal << std::endl;
                    std::cout << "Underwear Color:  " << contacts[whoDis]._underwearColor << std::endl;
                    std::cout << "Darkest Secret:   " << contacts[whoDis]._darkestSecret << std::endl;
                }
            else {
                std::cout << "Nobody Home!";
            }
        }

        if (commands == "EXIT")
            std::cout << "Thanks for playing >:)" << std::endl;
            break;
    }

    return 1;
}
