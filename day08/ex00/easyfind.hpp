/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 23:23:34 by mchristo          #+#    #+#             */
/*   Updated: 2019/02/01 21:26:49 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <stdexcept>
#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

template <typename T>
int		easyfind(T &x, int y)
{
	typename T::iterator i = std::find(x.begin(), x.end(), y);
	if (i != x.end())
		return *i;
	throw std::logic_error("No Occurences");
}

#endif