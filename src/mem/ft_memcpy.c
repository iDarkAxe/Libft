/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:26:57 by ppontet           #+#    #+#             */
/*   Updated: 2025/02/17 18:11:39 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Set a memory zone with a value, count times
 *
 * @param pointer memory zone to set
 * @param value value to set
 * @param count number of times to set the value
 * @return void* pointer to the memory zone
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
