/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 23:19:31 by mchristo          #+#    #+#             */
/*   Updated: 2019/02/01 22:00:59 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    Span sp = Span(100000);

    // sp.addNumber(5);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);

    for (int i = 0; i < 100000; i++) {
        unsigned int num = rand() % 1594325;
        sp.addNumber(num);
    }
    
    std::cout << "\033[1;32mFinding shortest and longest span...\033[0m" << std::endl;

    std::cout << "                " << sp.shortestSpan() << std::endl;
    std::cout << "             " << sp.longestSpan() << std::endl;

    std::cout << "\033[1;32m    Overflowing the container...\033[0m" << std::endl;
    sp.addNumber(42);
}