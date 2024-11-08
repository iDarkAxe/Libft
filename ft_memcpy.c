/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:26:57 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/07 17:08:11 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

//@TODO crash ´your memcpy does not behave
// well with NULL as both params with size´
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
	unsigned char	*dest_pointer;
	unsigned char	*src_pointer;
	size_t			index;

	dest_pointer = (unsigned char *)destination;
	src_pointer = (unsigned char *)source;
	index = 0;
	while (size > 0)
	{
		dest_pointer[index] = (unsigned char)src_pointer[index];
		index++;
		size--;
	}
	return (dest_pointer);
}
