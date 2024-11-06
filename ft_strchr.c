/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:15:41 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/06 13:31:54 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Find first occurrence of searchedChar
 *
 * @param string
 * @param searchedChar
 * @return char* index of Char found
 */
char	*ft_strchr(const char *string, int searchedChar)
{
	unsigned int	i;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == searchedChar)
			return ((char *)&string[i]);
		i++;
	}
	if (string[i] == searchedChar)
		return ((char *)&string[i]);
	return (NULL);
}
