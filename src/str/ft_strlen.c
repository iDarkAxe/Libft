/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:35:19 by ppontet           #+#    #+#             */
/*   Updated: 2025/04/26 13:10:45 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *the_string);
size_t	ft_strlen_char(const char *the_string, int character);

/**
 * @brief Len of string without '\0'
 *
 * @param the_string string to check
 * @return size_t len of the string
 */
size_t	ft_strlen(const char *the_string)
{
	size_t	count;

	count = 0;
	while (the_string != NULL && the_string[count] != '\0')
		count++;
	return (count);
}

/**
 * @brief Len of string without '\0' and character
 *
 * @param the_string string to check
 * @return size_t len of the string
 */
size_t	ft_strlen_char(const char *the_string, int character)
{
	size_t	count;
	size_t	index;

	index = 0;
	count = 0;
	while (the_string != NULL && the_string[index] != '\0')
	{
		if (the_string[index] != (char)character)
			count++;
		index++;
	}
	return (count);
}
