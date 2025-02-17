/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:15:41 by ppontet           #+#    #+#             */
/*   Updated: 2025/02/17 18:26:26 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Find first occurrence of searched_char
 *
 * @param string string to search in
 * @param searched_char char to search
 * @return char* index of Char found
 */
char	*ft_strchr(const char *string, int searched_char)
{
	unsigned long int	i;

	i = 0;
	while (searched_char > 256)
		searched_char = searched_char - 256;
	while (string[i] != '\0')
	{
		if (string[i] == (char)searched_char)
			return ((char *)&string[i]);
		i++;
	}
	if (string[i] == (char)searched_char)
		return ((char *)&string[i]);
	return (NULL);
}
