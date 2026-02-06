/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:02:57 by zivanov           #+#    #+#             */
/*   Updated: 2025/12/17 17:05:21 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	int		i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (i = 1; i < argc; i++)
		{
			std::string	str;
			str = argv[i];
			for (size_t j = 0; j < str.length(); j++)
				str[j] = std::toupper(str[j]);
			std::cout << str;
			if (i < argc - 1)
				std::cout << " ";
		}
	}
	std::cout << '\n';
	return (0);
}

