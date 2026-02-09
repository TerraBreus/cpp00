/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 10:46:51 by zivanov           #+#    #+#             */
/*   Updated: 2026/02/09 14:36:39 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define MAX_CONTACTS 8
# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
	private :
		Contact	contacts[MAX_CONTACTS];
		int		index;
	public :
		PhoneBook();
		void	add();
		void	search();
};

#endif
