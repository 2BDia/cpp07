/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 13:54:41 by rvan-aud          #+#    #+#             */
/*   Updated: 2022/01/13 18:21:16 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	std::cout << "*** Int tests ***" << std::endl << std::endl;

	Array<int>	i_arr(5);
	std::cout << "i_arr size = " << i_arr.size() << std::endl;
	i_arr[0] = 0;
	i_arr[1] = 1;
	i_arr[2] = 2;
	i_arr[3] = 3;
	i_arr[4] = 4;
	try
	{
		std::cout << "i_arr[2] = " << i_arr[2] << std::endl;
		std::cout << "i_arr[5] = " << i_arr[5] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "- Copy tests -" << std::endl;
	Array<int>	i_cpy(i_arr);
	std::cout << "i_cpy[2] = " << i_cpy[2] << std::endl;
	i_cpy[2] = -50;
	std::cout << "i_cpy[2] now = " << i_cpy[2] << " and i_arr[2] hasn't changed : i_arr[2] = " << i_arr[2] << std::endl;

	std::cout << std::endl << "- Assignment tests -" << std::endl;
	Array<int>	i_assign = i_arr;
	std::cout << "i_assign[2] = " << i_assign[2] << std::endl;
	i_assign[2] = -50;
	std::cout << "i_assign[2] now = " << i_assign[2] << " and i_arr[2] hasn't changed : i_arr[2] = " << i_arr[2] << std::endl;


	std::cout << std::endl << std::endl << "*** Same tests with std::string ***" << std::endl << std::endl;

	Array<std::string>	s_arr(3);
	std::cout << "s_arr size = " << s_arr.size() << std::endl;
	s_arr[0] = "I";
	s_arr[1] = "love";
	s_arr[2] = "arrays :)";
	try
	{
		std::cout << "s_arr[1] = " << s_arr[1] << std::endl;
		std::cout << "s_arr[4] = " << s_arr[4] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "- Copy tests -" << std::endl;
	Array<std::string>	s_cpy(s_arr);
	std::cout << "s_cpy[2] = " << s_cpy[2] << std::endl;
	s_cpy[2] = "beep";
	std::cout << "s_cpy[2] now = " << s_cpy[2] << " and s_arr[2] hasn't changed : s_arr[2] = " << s_arr[2] << std::endl;

	std::cout << std::endl << "- Assignment tests -" << std::endl;
	Array<std::string>	s_assign = s_arr;
	std::cout << "s_assign[2] = " << s_assign[2] << std::endl;
	s_assign[2] = "boop";
	std::cout << "s_assign[2] now = " << s_assign[2] << " and s_arr[2] hasn't changed : s_arr[2] = " << s_arr[2] << std::endl;

	// system("leaks ex02");
}
