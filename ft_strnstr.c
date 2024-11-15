/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:06:20 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/15 15:01:14 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/**
* @brief Search a substring in a bigger string,
	up to len position in string
*
* @param big
* @param little
* @param len
* @return char*
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_size;
	size_t	count;

	count = 0;
	little_size = ft_strlen(little);
	if (little_size == 0 || little == big)
		return ((char *)&big[0]);
	if (len == 0 || *big == '\0' || ft_strlen(big) < little_size
		|| len < little_size)
		return (NULL);
	while (big[count] != '\0' && count <= (len - little_size))
	{
		if (ft_strncmp(&big[count], little, little_size) == 0)
			return ((char *)&big[count]);
		count++;
	}
	if (count > (len - little_size))
		return (NULL);
	return ((char *)&big[0]);
}
