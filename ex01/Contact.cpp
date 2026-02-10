/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 11:07:51 by zivanov           #+#    #+#             */
/*   Updated: 2026/02/09 14:28:22 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>

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

void	Contact::setContactDetails()
{
	Contact::firstName = askForInput("Please enter First name of Contact");
	std::cout << "User has given a firstName of: " << Contact::firstName << std::endl;
	/*
	 * Get input from user.
	 * Check if non-empty input.
	 * Set variable.
	 * Repeat five times.
	*/
}
