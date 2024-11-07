/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:19:49 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/07 15:06:38 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

//@TODO Passe 4 tests, mais pas tous
/**
 * @brief
 *
 * @param destination
 * @param source
 * @param size
 * @return void*
 */
void	*ft_memmove(void *destination, const void *source, size_t size)
{
	unsigned char	*dest_pointer;
	unsigned char	*src_pointer;
	size_t			index;
	signed char		order;

	dest_pointer = (unsigned char *)destination;
	src_pointer = (unsigned char *)source;
	index = 0;
	order = 1;
	if (dest_pointer <= src_pointer)
		order = -1;
	while (size > 0)
	{
		if (order)
			dest_pointer[index] = (unsigned char)src_pointer[index];
		else
			dest_pointer[size] = (unsigned char)src_pointer[size];
		index++;
		size--;
	}
	return (dest_pointer);
}
