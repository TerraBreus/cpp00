/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 10:46:51 by zivanov           #+#    #+#             */
/*   Updated: 2026/02/09 12:31:32 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define MAX_CONTACTS 8
# include <iostream>

class PhoneBook
{
	private :
		//Contact	contacts[MAX_CONTACTS];
		//int		index;
	public :
		void	add();
		void	search();
};

#endif
