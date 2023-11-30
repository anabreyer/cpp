/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaduan-b <aaduan-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:58:36 by yoel              #+#    #+#             */
/*   Updated: 2023/11/22 12:57:09 by aaduan-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: ./scalar number" << std::endl;
		return (1);
	}
	ScalarConverter::convert(av[1]);
	return (0);
}
