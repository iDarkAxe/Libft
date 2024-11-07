/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:16:03 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/07 16:24:31 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

//@TODO RATE UN TEST
/**
 * @brief Find differences between first and second
 *
 * @param first
 * @param second
 * @param length
 * @return int value of first - second
 */

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t	index;

	index = 0;
	if (length == 0)
		return (0);
	while ((length - 1) > 0 && first[index] == second[index]
		&& first[index] != '\0')
	{
		length--;
		index++;
	}
	return (first[index] - second[index]);
}
