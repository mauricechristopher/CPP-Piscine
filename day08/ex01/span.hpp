/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 23:20:05 by mchristo          #+#    #+#             */
/*   Updated: 2019/02/01 22:13:54 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <stdexcept>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>

class Span
{

	public:

		Span();
		Span(unsigned int n);
		Span(Span const &);
		~Span();
		Span &	operator=(Span const &);

		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();

	private:	
	
		std::vector<int>	_vec;
};

#endif