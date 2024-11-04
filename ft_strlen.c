/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:35:19 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/04 16:45:56 by ppontet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlen( const char * theString )
{
    size_t count;

    count = 0;
    while (theString[count] != '\0')
        count++;
    return (count);
}