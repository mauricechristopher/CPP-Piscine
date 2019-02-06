/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 20:49:38 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/31 22:41:46 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <stdexcept>
#include <iostream>

template <typename A = int>
class Array
{
    public:
    
        Array<A>(): _array(NULL), _size(0) {};

        Array<A>(int n): _size(n)                           // Create Arrays
        {
            if (_size == 0)
                _array = NULL;
            else
                _array = new A[n];
        };

        Array<A>(Array<A> const &orig): _array(NULL), _size(0)              
        {
            *this = orig;
        };

        ~Array<A>() {};

        int	size() const                                    // Find Size
        {
            return (this->_size);
        };

        Array<A> &operator=(Array<A> const &aloc) {         // Modify/Copy Array
            if (this != &aloc) {
                delete [] this->_array;
                this->_size = aloc._size;
                this->_array = new A[aloc._size];
                for (int i = 0; i < aloc._size; ++i)
                    this->_array[i] = aloc._array[i];
            }
            return *this;
        };

        A &operator[](int index) {                          // Checks if Given Index is in Range
            if (index < this->_size)
                return (this->_array[index]);
            else
                throw std::range_error("\033[1;31mArray: Out of bounds!\033[0m");
        };

    private:
    
        A*		_array;
        int	    _size;
};

#endif