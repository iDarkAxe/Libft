/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:07:07 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/12 16:08:27 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Compare blocs par blocs les blocs mémoires, jusqu'à size blocs
 * 
 * @param src 
 * @param set 
 * @param size 
 * @return int 
 */
int	ft_memcmp(const void *src, const void *set, size_t size)
{
	size_t			index;
	unsigned char	*src_pointer;
	unsigned char	*set_pointer;

	index = 0;
	src_pointer = (unsigned char *)src;
	set_pointer = (unsigned char *)set;
	if (size == 0)
		return (0);
	while (index < (size - 1) && src_pointer[index] == set_pointer[index])
		index++;
	return ((unsigned char)src_pointer[index]
		- (unsigned char)set_pointer[index]);
}
