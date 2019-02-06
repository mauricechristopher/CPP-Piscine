/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 23:21:00 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/30 23:32:36 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConversion.hpp"

ScalarConversion::ScalarConversion(void)
{
    return ;
}

ScalarConversion::ScalarConversion(const ScalarConversion &src)
{
    *this = src;
    return ;
}

ScalarConversion::~ScalarConversion(void)
{
    return ;
}

ScalarConversion
&ScalarConversion::operator= (const ScalarConversion &rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

char    ScalarConversion::convertToChar(double d)
{
    char    c;

    if (std::isnan(d) == true)
    {
        throw (ScalarConversion::Impossible());
    }
    c = static_cast<char>(d);
    if (std::isprint(c) == false)
    {
        throw (ScalarConversion::NonDisplayable());
    }
    return (c);
}

int     ScalarConversion::convertToInt(double d)
{
    if (std::isnan(d) == true || std::isinf(d) == true)
    {
        throw (ScalarConversion::Impossible());
    }
    if (d > static_cast<double>(INT_MAX) || d < static_cast<double>(INT_MIN))
    {
        throw (ScalarConversion::Impossible());
    }
    return (static_cast<int>(d));
}

float   ScalarConversion::convertToFloat(double d)
{
    return (static_cast<float>(d));
}

double  ScalarConversion::convertToDouble(double d)
{
     return (static_cast<double>(d));
}

ScalarConversion::NonDisplayable::NonDisplayable(void)
{
    return ;
}

ScalarConversion::NonDisplayable::NonDisplayable(ScalarConversion::NonDisplayable const &src)
{
    *this = src;
    return ;
}

ScalarConversion::NonDisplayable::~NonDisplayable(void) throw()
{
    return ;
}

ScalarConversion::NonDisplayable&ScalarConversion::NonDisplayable::operator= (const ScalarConversion::NonDisplayable &rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

const char  *ScalarConversion::NonDisplayable::what(void) const throw()
{
    return("Non displayable");
}

ScalarConversion::Impossible::Impossible(void)
{
    return ;
}

ScalarConversion::Impossible::Impossible(ScalarConversion::Impossible const &src)
{
    *this = src;
    return ;
}

ScalarConversion::Impossible::~Impossible(void) throw()
{
    return ;
}

ScalarConversion::Impossible&ScalarConversion::Impossible::operator= (const ScalarConversion::Impossible &rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

const char  *ScalarConversion::Impossible::what(void) const throw()
{
    return("impossible");
}
