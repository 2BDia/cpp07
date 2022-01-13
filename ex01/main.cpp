/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 13:18:00 by rvan-aud          #+#    #+#             */
/*   Updated: 2022/01/13 13:50:38 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	ft(int const &n)
{
	std::cout << "n + 1 = " << n + 1 << std::endl;
}

int	main(void)
{
	int			i_arr[] = {0, 1, 2, 3, 4, 5, 6};
	std::string	s_arr[] = {"I", "love", "arrays :)"};
	float		f_arr[] = {5.4f, 9.0f, 82.51f, 7.f, -96.f};

	iter<int>(i_arr, 7, ft);
	std::cout << std::endl;
	iter<std::string>(s_arr, 3, ::print);
	std::cout << std::endl;
	iter<float>(f_arr, 5, ::print);
}
