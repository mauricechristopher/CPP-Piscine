/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 13:28:12 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/21 14:41:51 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char** argv)
{
    if (argc > 1)                                                   // Drop first argument (a.out)
    {
        for (int i = 1; i < argc; i++)                              // Iterate args
            for (int j = 0; j < (int)strlen(argv[i]); j++)               // Iterate characters
                std::cout << (char)toupper(argv[i][j]);             // Profit
    }

    else                                                            // No argument condition
    {   
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";      // It HURTS!
    }
    std::cout << std::endl;                                         // Add a newline annnnddd...
    return 0;                                                       // Finished
};
