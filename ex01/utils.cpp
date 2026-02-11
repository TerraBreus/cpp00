/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:27:44 by zivanov           #+#    #+#             */
/*   Updated: 2026/02/11 12:17:15 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void	capitalizeString(std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		str[i] = std::toupper(str[i]);
	}
}

int		invalidInput(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (std::isalpha(str[i]) || std::isdigit(str[i]))
			return (0);
	}
	return (1);
}

std::string	askForInput(std::string prompt)
{
	std::string	userInput;

	while (42)
	{
		std::cout << prompt << std::endl;
		std::getline(std::cin, userInput);
		if (invalidInput(userInput))
		{
			std::cout << "Field cannot be empty" << std::endl;
			continue ;
		}
		break ;
	}
	return (userInput);
}
