/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guviure <guviure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:07:44 by guviure           #+#    #+#             */
/*   Updated: 2026/03/19 16:24:32 by guviure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T_array, typename T_function>
void iter(T_array *a, const size_t lenght, T_function function)
{
    for (size_t s = 0; s < lenght; s++)
        function(a[s]);
}
