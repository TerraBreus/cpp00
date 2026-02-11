/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 11:07:51 by zivanov           #+#    #+#             */
/*   Updated: 2026/02/11 11:35:46 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setContactDetails()
{
	firstName = askForInput("Please enter First name of Contact");
	lastName = askForInput("Please enter Last name of Contact");
	nickName = askForInput("Please enter a nickname for Contact");
	phoneNumber = askForInput("Please enter a phonenumber for Contact");
	darkestSecret = askForInput("Please enter Contact's darkest secret");
	std::cout << "Contact has been added!" << std::endl;
}

std::string	Contact::getFirstName()
{
	return (firstName);
}

std::string	Contact::getLastName()
{
	return (lastName);
}

std::string	Contact::getNickName()
{
	return (nickName);
}

std::string	Contact::getPhoneNumber()
{
	return (phoneNumber);
}

std::string	Contact::getDarkestSecret()
{
	return (darkestSecret);
}
