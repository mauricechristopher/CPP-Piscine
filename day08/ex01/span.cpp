/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 23:20:40 by mchristo          #+#    #+#             */
/*   Updated: 2019/02/01 22:00:57 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() {
	_vec.reserve(0);
}

Span::Span(unsigned int n) {
	_vec.reserve(n);
}

Span::Span(Span const & src) {
	*this = src;
}

Span::~Span() {}

Span &	Span::operator=(Span const &orig) {
	this->_vec = orig._vec;
	return *this;
}

void	Span::addNumber(int n) {
	if (this->_vec.size() < this->_vec.capacity())
		this->_vec.push_back(n);
	else
		throw std::overflow_error("\033[1;31mError!!! Too Many Numbers\033[0m");
}

void displayInt(int i) {
	std::cout << i << std::endl;
}

int	Span::shortestSpan() {
	std::vector<int> cpy = _vec;

    std::sort(cpy.begin(), cpy.end());
	std::adjacent_difference(cpy.begin(), cpy.end(), cpy.begin() - 1);
	cpy.pop_back();
    return (cpy[std::distance(cpy.begin(), std::min_element(cpy.begin(), cpy.end()))]);
}

int	Span::longestSpan() {
	std::vector<int>::iterator	min = std::min_element(_vec.begin(), _vec.end());
	std::vector<int>::iterator	max = std::max_element(_vec.begin(), _vec.end());

	return (_vec[std::distance(_vec.begin(), max)] - _vec[std::distance(_vec.begin(), min)]);
}