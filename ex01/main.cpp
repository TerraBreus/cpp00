/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 09:55:02 by zivanov           #+#    #+#             */
/*   Updated: 2026/02/11 11:39:37 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	capitalizeString(std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		str[i] = std::toupper(str[i]);
	}
}

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	userInput;
	
	while (42)
	{
		std::cout << "Commands: ADD/SEARCH/EXIT" << std::endl;
		std::getline(std::cin, userInput);
		capitalizeString(userInput);
		if (userInput == "ADD")
			phoneBook.add();
		else if (userInput == "SEARCH")
			phoneBook.search();
		else if (userInput == "EXIT")
			break ;
		else
			std::cout << "Invalid command." << std::endl;
	}
	return (0);
}
