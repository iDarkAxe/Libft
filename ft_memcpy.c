/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:26:57 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/15 16:07:35 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Set a memory zone with a value, count times
 *
 * @param pointer
 * @param value
 * @param count
 * @return void*
 */
void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	char	*dest_pointer;
	char	*src_pointer;
	size_t	index;

	dest_pointer = (char *)destination;
	src_pointer = (char *)source;
	index = 0;
	if (destination == source)
		return (destination);
	while (size > 0)
	{
		dest_pointer[index] = (char)src_pointer[index];
		index++;
		size--;
	}
	return (destination);
}
