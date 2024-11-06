/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:16:03 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/06 15:03:03 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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
	unsigned int	index;

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
