/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:03:57 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/08 16:55:16 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

//@WIP RATE UN TEST
/**
 * @brief Create a copy of source into a new pointer at start, of size len
 *	NEEDS to be freed
 * @param s
 * @param start
 * @param len
 * @return char*
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pointer;

	pointer = malloc(sizeof(char) * (len + 1));
	if (pointer == NULL)
		return (NULL);
	pointer += len + start;
	s += len + start;
	*pointer = '\0';
	while (len > 0)
	{
		*(--pointer) = *(--s);
		--len;
	}
	return (pointer);
}

// char	*ft_strdup(const char *source)
// {
// 	char	*pointer;
// 	size_t	count;
// 	size_t	index;

// 	count = 0;
// 	while (source[count] != '\0')
// 		count++;
// 	pointer = malloc(sizeof(char) * (count + 1));
// 	if (pointer == NULL)
// 		return (NULL);
// 	index = 0;
// 	while (count > 0)
// 	{
// 		pointer[index] = source[index];
// 		index++;
// 		count--;
// 	}
// 	pointer[index] = '\0';
// 	return (pointer);
// }
