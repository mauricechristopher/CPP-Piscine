/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getPrecision.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 23:19:13 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/30 23:19:16 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstring>

int getPrecision(char *str)
{
    unsigned int     before;
    unsigned int     after;

    before = 0;
    while (str[before] && str[before] != '.')
    {
        before += 1;
    }
    after = before + 1;
    while (str[after] && isdigit(str[after]))
    {
        after += 1;
    }
    after -= before;
    return ((strlen(str) == before || after == 1) ? 1 : after - 1);
}
