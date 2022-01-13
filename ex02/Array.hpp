/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 13:54:43 by rvan-aud          #+#    #+#             */
/*   Updated: 2022/01/13 18:09:24 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>

template<typename T>
class	Array
{
	public:

		Array(void) : _size(0)
		{
			this->_array = new T[0];
		}
		Array(unsigned int n) : _size(n)
		{
			this->_array = new T[n];
		}
		Array(Array const &src)
		{
			this->_size = src._size;
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = src._array[i];
		}
		~Array(void)
		{
			delete [] this->_array;
		}

		Array	&operator=(Array const &rhs)
		{
			this->~Array();
			this->_size = rhs._size;
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];
			return (*this);
		}

		T	&operator[](unsigned int index)
		{
			if (index >= this->_size)
				throw (OutOfArrayException());
			else
				return (this->_array[index]);
		}

		int	size(void) const
		{
			return (this->_size);
		}

		class	OutOfArrayException : public std::exception
		{
			public:

				const char	*what() const throw()
				{
					return ("The element you're looking for is out of the array");
				}
		};

	private:

		unsigned int	_size;
		T				*_array;
};
