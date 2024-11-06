/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:05:54 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/06 13:35:22 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Find last occurrence of searchedChar
 *
 * @param string
 * @param searchedChar
 * @return char*
 */
char	*ft_strrchr(const char *string, int searchedChar)
{
	unsigned int	i;

	i = 0;
	while (string[i] != '\0')
		i++;
	while (i > 0)
	{
		if (string[i] == searchedChar)
			return ((char *)&string[i]);
		i--;
	}
	return (NULL);
}
