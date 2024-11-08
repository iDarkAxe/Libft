/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:16:03 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/08 11:46:50 by ppontet          ###   ########lyon.fr   */
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
	while (index < (length - 1) && (first[index] == second[index])
		&& first[index] != '\0')
		index++;
	return (first[index] - second[index]);
}

// int	ft_strncmp(char *s1, char *s2, unsigned int n)
// {
// 	unsigned int index;

// 	index = 0;
// 	if (n == 0)
// 		return (0);
// 	while ((s1[index] != '\0') && (s1[index] == s2[index]) && (index < (n - 1)))
// 		index++;
// 	return (s1[index] - s2[index]);
// }