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

PhoneBook::PhoneBook() : index(-1)
{
	std::cout << "W E L C O M E  T O  T H E  8 0 ' S\n";
}

void	PhoneBook::add()
{
	index = (index + 1) % MAX_CONTACTS;
	std::cout << index << "\n";
	contacts[index].setContactDetails();
}

void	PhoneBook::search()
{
	std::cout << "SEARCH function WIP\n";
}

