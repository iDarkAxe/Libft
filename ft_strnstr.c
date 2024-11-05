/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:06:20 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/05 17:34:21 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

//@WIP A TERMINER
/**
 * @brief Search a substring in a bigger string, up to len position in string
 *
 * @param big
 * @param little
 * @param len
 * @return char*
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_size;
	size_t	index;
	size_t	count;

	little_size = 0;
	while (little[little_size] != '\0')
		little_size++;
	while (big[count] != '\0' && len > 0)
	{
		while (big[index] == little[index] && index < little_size)
			index++;
		if (big[index] == little[index])
			return ((char *)big);
		index = 0;
		count++;
		len--;
	}
	return ((char *)big);
}
