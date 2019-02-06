/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 23:18:27 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/30 23:32:29 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

#include "../includes/conversions.hpp"
#include "../includes/ScalarConversion.hpp"

int
main(int argc, char *argv[])
{
    double              value;
    int                 precision;
    ScalarConversion    scalar;

    for (int i = 1; i < argc; i += 1)
    {
        precision = getPrecision(argv[i]);
        value = atof(argv[i]);
        checkChar(scalar, value);
        checkInt(scalar, value);
        checkFloat(scalar, value, precision);
        checkDouble(scalar, value, precision);
        
    }
    return (0);
}
