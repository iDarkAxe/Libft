/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:05:54 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/07 16:25:50 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

//@TODO rate un test sur libftTester
/**
 * @brief Find last occurrence of searched_char
 *
 * @param string
 * @param searched_char
 * @return char*
 */
char	*ft_strrchr(const char *string, int searched_char)
{
	unsigned long int	i;

	i = 0;
	while (string[i] != '\0')
		i++;
	while (i > 0)
	{
		if (string[i] == searched_char)
			return ((char *)&string[i]);
		i--;
	}
	if (string[i] == searched_char)
		return ((char *)&string[i]);
	return (NULL);
}
