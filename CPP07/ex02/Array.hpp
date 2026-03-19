/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guviure <guviure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:28:12 by guviure           #+#    #+#             */
/*   Updated: 2026/03/19 16:59:02 by guviure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


template<typename T>

class Array
{
    private :
        T   *_array;
        unsigned int    _size;
        
    public : 
        Array(): _size(0);
        {
            std::cout << "creation of empty array" << std::endl;
            this->_array = new T[this->_size];
        }
};