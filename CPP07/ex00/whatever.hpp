/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guviure <guviure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 10:53:57 by guviure           #+#    #+#             */
/*   Updated: 2026/03/18 10:54:19 by guviure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iomanip>
#include <string>

template<typename T>
T swap(T a, T b)
{
    T temp;
    temp = b;
    b = a;
    a = temp;
}

T min(T a, T b)
{
    return (a < b ? a : b);
}

T min(T a, T b)
{
    return (a > b ? a : b);
}
#endif
