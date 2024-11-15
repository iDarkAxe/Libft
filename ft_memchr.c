/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:06:29 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/15 16:33:31 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Recherche la première occurence d'une valeur typée int,
 * mais interprétée en tant que char
 * @param memory_block
 * @param searched_char
 * @param size
 * @return void*
 */
void	*ft_memchr(const void *memory_block, int searched_char, size_t size)
{
	char	*pointer;
	size_t	index;

	pointer = (char *)memory_block;
	index = 0;
	if (size == 0)
		return (NULL);
	while (size - index - 1 > 0)
	{
		if (pointer[index] == (char)searched_char)
			return ((char *)&pointer[index]);
		index++;
	}
	if (pointer[index] == (char)searched_char)
		return ((char *)&pointer[index]);
	return (NULL);
}
