/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 10:46:51 by zivanov           #+#    #+#             */
/*   Updated: 2026/02/11 13:50:47 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define MAX_CONTACTS 8
# define TABLE_WIDTH 10
# include "Contact.hpp"
# include "utils.hpp"
# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

class PhoneBook
{
	private :
		Contact	contacts[MAX_CONTACTS];
		int		index;
		int		numContacts;
	public :
		PhoneBook();
		void	add();
		void	search();
		void	printBriefContactDetails();
		void	printFullContactDetails(int index);
};

#endif
