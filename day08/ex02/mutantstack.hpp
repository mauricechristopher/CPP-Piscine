/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 23:15:18 by mchristo          #+#    #+#             */
/*   Updated: 2019/02/01 22:52:34 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		typedef    std::stack<T> base;

	public:
		MutantStack(void) {}
		~MutantStack(void) {}
		MutantStack(MutantStack const &c): base(c) {}
		typedef typename base::container_type::iterator iterator;
		using		base::operator=;

		iterator	begin() { return base::c.begin(); }
		iterator	end() { return base::c.end() ; }
};

#endif