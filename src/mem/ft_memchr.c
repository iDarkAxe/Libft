/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:06:29 by ppontet           #+#    #+#             */
/*   Updated: 2025/02/17 18:10:31 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Research the first occurence of a value typed int, 
 * but interpreted as a char in a memory block.
 * 
 * @param memory_block memory block to search in
 * @param searched_char value to search
 * @param size size of the memory block
 * @return void* pointer to the first occurence of the value
 * or NULL if not found
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
