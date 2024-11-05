/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:16:03 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/05 16:21:17 by ppontet          ###   ########lyon.fr   */
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
	while (length > 0 && *first == *second)
	{
		length--;
		first++;
		second++;
	}
	return (*first - *second);
}
