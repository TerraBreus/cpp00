/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 10:21:24 by zivanov           #+#    #+#             */
/*   Updated: 2026/02/11 13:04:33 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(-1), numContacts(0)
{
	std::cout << "W E L C O M E  T O  T H E  8 0 ' S\n";
}

void	PhoneBook::add()
{
	Contact	newContact;

	index = (index + 1) % MAX_CONTACTS;
	std::cout << "Adding Contact with index number:" << index << "\n";
	newContact.setContactDetails();
	contacts[index] = newContact;
	if (numContacts < MAX_CONTACTS)
		numContacts++;

}

void	printElementInWidth(std::string str, int width)
{
	if (str.length() > (size_t) width)
	{
		std::cout << str.substr(0, width - 1) << ".";
	}
	else
	{
		std::cout << std::setw(width) << str;
	}
}

void	PhoneBook::printBriefContactDetails()
{
	for (int i = 0; i < numContacts; i++)
	{
		std::cout << std::setw(TABLE_WIDTH) << i;
		std::cout << "|";
		printElementInWidth(contacts[i].getFirstName(), TABLE_WIDTH);
		std::cout << "|";
		printElementInWidth(contacts[i].getLastName(), TABLE_WIDTH);
		std::cout << "|";
		printElementInWidth(contacts[i].getNickName(), TABLE_WIDTH);
		std::cout << std::endl;
	}
}

void	PhoneBook::printFullContactDetails(int index)
{
	std::cout << "Name: ";
	std::cout << contacts[index].getFirstName() << "\n";
	std::cout << "Surname: ";
	std::cout << contacts[index].getLastName() << "\n";
	std::cout << "Nickname: ";
	std::cout << contacts[index].getNickName() << "\n";
	std::cout << "Phonenumber: ";
	std::cout << contacts[index].getPhoneNumber() << "\n";
	std::cout << "Darkest Secret: ";
	std::cout << contacts[index].getDarkestSecret();
	std::cout << std::endl;
}

void	PhoneBook::search()
{
	std::string	userInput;
	int			userIndex;

	printBriefContactDetails();
	while (42)
	{
		userInput = askForInput("Enter index to view full contact information or press q to exit");
		if (userInput == "q")
			break ;
		userIndex = std::atoi(userInput.c_str());
		if (userIndex < 0 || userIndex > numContacts - 1)
		{
			std::cout << "Please enter a number between 0 and " << numContacts - 1 << std::endl;
			continue ;
		}
		printFullContactDetails(userIndex);
		break ;
	}
}
	/*
	 * Print Initial Contact information
	 * index - firstName - lastName - nickName
	 *
	 * ask for index.
	 * check if index is in bounds.
	 * if not, print initial contact information again
	 * and ask for input once more
	 *
	 * if valid index displayAllContactDetails
	 */
