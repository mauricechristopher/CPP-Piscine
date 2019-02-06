/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 23:20:27 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/30 23:20:46 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONS_H
# define CONVERSIONS_H

# include "ScalarConversion.hpp"

int          getPrecision(char *str);

void         checkChar(ScalarConversion scalar, double value);
void         checkInt(ScalarConversion scalar, double value);
void         checkDouble(ScalarConversion scalar, double value, int precision);
void         checkFloat(ScalarConversion scalar, double value, int precision);


#endif
