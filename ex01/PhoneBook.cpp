/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 10:21:24 by zivanov           #+#    #+#             */
/*   Updated: 2026/02/09 14:38:23 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

PhoneBook::PhoneBook() : index(-1), numContacts(0)
{
	std::cout << "W E L C O M E  T O  T H E  8 0 ' S\n";
}

/*
 *	Once all the fields have been completed,
 *	add the contact to the phonebook.
 *
 *	Meaning we must first create a class for the newContact,
 *	fill it with the relavant information, and then add it to
 *	the array. Currently we fill in the empty ContactEntry that
 *	is already stored in the PHoneBOok. Small difference but the
 *	subject does explicitly state we must first set the details
 *	of the contact and THEN add it to the phonebook.
*/

void	PhoneBook::add()
{
	index = (index + 1) % MAX_CONTACTS;
	std::cout << "Adding Contact with index number:" << index << "\n";
	contacts[index].setContactDetails();
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
		printElementInWidth(contacts[i].getFirstName(), TABLE_WIDTH);
		std::cout << std::endl;
	}
}

void	PhoneBook::search()
{
	printBriefContactDetails();
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
}

