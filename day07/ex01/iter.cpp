/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 19:39:44 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/31 23:05:42 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename A>
void    iter(A *array, int length, void (*f)(A const &))
{
    for(int i = 0; i < length; i++)
        f(array[i]);
    return ;
}

template <typename B>
void    print(B const &c)
{
    std::cout << c << ", ";
}

template <typename C>
void    blanked(C const &)
{
    std::string _d = "\033[1;31mx\033[0m";
    std::cout << _d << "\033[1;31m, \033[0m";
}

int     main()
{
    std::string letters[] = {"A", "B", "C", "D"};
    int         numbers[] = {0, 42, 27, 66, 51};

    std::cout << std::endl
              << "\033[1;32mLetters: \033[0m";
    iter(letters, 4, print);
    std::cout << std::endl;

    std::cout << std::endl
              << "\033[1;34mNumbers: \033[0m";
    iter(numbers, 4, print);
    std::cout << std::endl;

    std::cout << std::endl
              << "\033[1;32mLetters Blanked: \033[0m";
    iter(letters, 4, blanked);
    std::cout << std::endl;

    std::cout << std::endl
              << "\033[1;34mNumbers Blanked: \033[0m";
    iter(numbers, 4, blanked);
    std::cout << std::endl << std::endl;

    return 0;
}