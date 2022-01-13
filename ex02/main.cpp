/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 13:54:41 by rvan-aud          #+#    #+#             */
/*   Updated: 2022/01/13 15:20:11 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
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
	system("leaks ex02");
}
