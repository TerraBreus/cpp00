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

int	is_lower(char a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (is_lower(argv[i][j]))
					std::cout << (char) (argv[i][j] - 32);
			else
					std::cout << argv[i][j];
		}
	}
	std::cout << '\n';
	return (0);
}

