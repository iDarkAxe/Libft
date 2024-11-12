/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:45:58 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/12 18:09:12 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void ft_free_malloc(char **ptr_ptr, size_t count);
//@WIP A FAIRE

/**
 * @brief Alloue avec malloc et retourne un tableau de chaînes
 * de caractères obtenu en séparant ’s’ à l’aide du caractère ’c’,
 * utilisé comme délimiteur. Le tableau doit être terminé par NULL
 * @param s
 * @param c
 * @return char**
 */
char	**ft_split(char const *s, char c)
{
	char	**ptr_ptr;
	size_t	count;
	size_t	index;

	index = 0;
	count = 0;
	ptr_ptr = malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[index] != '\0')
	{
		if (ft_strchr(&s[index], c) != NULL)
			ptr_ptr[count++] = ft_substr(s, index, *(ft_strchr(&s[index + 1], c)) - s[index]);
		if (count != 0 && ptr_ptr[count - 1] == NULL)
		{
			ft_free_malloc(ptr_ptr, count);
			return (NULL);
		}
		index++;
	}
	return (ptr_ptr);
}

/**
 * @brief Free mallocs
 * 
 * @param ptr_ptr 
 * @param count 
 */
static void ft_free_malloc(char **ptr_ptr, size_t count)
{
	while (count > 0)
	{
		free(ptr_ptr[count]);
		count++;
	}
}

/**
 * @brief Count occurrence of c in string s
 * 
 * @param s string
 * @param c char
 * @return size_t 
 */
// static size_t	str_count_char(char const *s, char c)
// {
// 	size_t count;
	
// 	count = 0;
// 	while (*s == '\0')
// 	{
// 		if (ft_strchr(s, c) != NULL)
// 			count++;
// 		s++;
// 	}
// 	return (count);
// }