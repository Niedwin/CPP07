/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guviure <guviure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:28:12 by guviure           #+#    #+#             */
/*   Updated: 2026/03/30 18:40:55 by guviure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP


#include <iostream>
#include <exception>
#include <ctime>
#include <cstdlib>

template <typename T>
class Array {
	private:
		unsigned int		_size;
		T*					_array;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();
		T& operator[](unsigned int index);
		unsigned int size() const;
};

#include "Array.tpp"

#endif