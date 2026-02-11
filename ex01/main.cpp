/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 09:55:02 by zivanov           #+#    #+#             */
/*   Updated: 2026/02/11 12:17:15 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"



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
