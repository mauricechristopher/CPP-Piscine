/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 15:22:16 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/21 15:22:18 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>

class Contact {
    public:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _login;
        std::string _postalAddress;
        std::string _emailAddress;
        std::string _phoneNumber;
        std::string _birthdate;
        std::string _favoriteMeal;
        std::string _underwearColor;
        std::string _darkestSecret;
        
        Contact(void)
        {
            _firstName = "";
            _lastName = "";
            _nickname = "";
            _login = "";
            _postalAddress = "";
            _emailAddress = "";
            _phoneNumber = "";
            _birthdate = "";
            _favoriteMeal = "";
            _underwearColor = "";
            _darkestSecret = "";
        }
        Contact(
            std::string firstName,
            std::string lastName,
            std::string nickname,
            std::string login,
            std::string postalAddress,
            std::string emailAddress,
            std::string phoneNumber,
            std::string birthdate,
            std::string favoriteMeal,
            std::string underwearColor,
            std::string darkestSecret ) 
            {
                _firstName = firstName;
                _lastName = lastName;
                _nickname = nickname;
                _login = login;
                _postalAddress = postalAddress;
                _emailAddress = emailAddress;
                _phoneNumber = phoneNumber;
                _birthdate = birthdate;
                _favoriteMeal = favoriteMeal;
                _underwearColor = underwearColor;
                _darkestSecret = darkestSecret;
            }      
};

Contact AddContact();
#endif