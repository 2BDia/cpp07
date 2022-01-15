/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 13:18:08 by rvan-aud          #+#    #+#             */
/*   Updated: 2022/01/15 15:54:27 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

template<typename T>
void	iter(T *array, int length, void f(T const &))
{
	for (int i = 0; i < length; i++)
		(*f)(array[i]);
}

template<typename T>
void	print_T(T const &n)
{
	std::cout << n << std::endl;
}
