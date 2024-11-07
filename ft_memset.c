/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:29:02 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/07 14:39:41 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

/**
 * @brief Set a memory zone with a value, count times
 *
 * @param pointer
 * @param value
 * @param count
 * @return void*
 */
void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char	*new_pointer;
	size_t			index;

	new_pointer = (unsigned char *)pointer;
	index = 0;
	while (count > 0)
	{
		new_pointer[index] = (unsigned char)value;
		index++;
		count--;
	}
	return (pointer);
}
