/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:45:58 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/15 16:13:17 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void		ft_free_malloc(char **ptr_ptr, size_t count);
static char		*ft_strchr_end(const char *string, int searched_char);
static size_t	str_count_char(char const *s, char c);

/**
 * @brief Alloue avec malloc et retourne un tableau de chaînes
 * de caractères obtenu en séparant ’s’ à l’aide du caractère ’c’,
 * utilisé comme délimiteur. Le tableau doit être terminé par NULL
 *
 * @param s
 * @param c
 * @return char**
 */
char	**ft_split(char const *s, char c)
{
	char	**ptr_ptr;
	size_t	count;
	size_t	nbr_cuts;

	count = 0;
	nbr_cuts = str_count_char(s, c);
	ptr_ptr = malloc(sizeof(char *) * (nbr_cuts + 1));
	if (ptr_ptr == NULL)
		return (NULL);
	while (nbr_cuts-- > 0)
	{
		while (*s == c && *s != '\0')
			s++;
		ptr_ptr[count] = ft_substr(s, 0, ft_strchr_end(s, c) - s);
		if (ptr_ptr[count++] == NULL)
		{
			ft_free_malloc(ptr_ptr, count - 1);
			return (NULL);
		}
		s += ft_strchr_end(s, c) - s;
	}
	ptr_ptr[count] = NULL;
	return (ptr_ptr);
}

/**
 * @brief Work exactly like strchr, but return end of string
 * if searched_char not found
 *
 * @param string
 * @param searched_char
 * @return char*
 */
static char	*ft_strchr_end(const char *string, int searched_char)
{
	char	*pointer;

	pointer = ft_strchr(string, searched_char);
	if (pointer == NULL)
		pointer = (char *)string + ft_strlen(string);
	return (pointer);
}

/**
 * @brief Free mallocs
 *
 * @param ptr_ptr
 * @param count
 */
static void	ft_free_malloc(char **ptr_ptr, size_t count)
{
	while (count > 0)
		free(ptr_ptr[--count]);
	free(ptr_ptr);
}

/**
 * @brief Count occurrence of c in string s
 *
 * @param s string
 * @param c char
 * @return size_t
 */
static size_t	str_count_char(char const *s, char c)
{
	size_t			count;
	unsigned char	in_substring;

	count = 0;
	in_substring = 0;
	while (*s != '\0')
	{
		if (*s == c)
			in_substring = 0;
		else if (!in_substring)
		{
			in_substring = 1;
			count++;
		}
		s++;
	}
	return (count);
}

// int main(void)
// {
// 	char **ptr = ft_split("lorem ipsum spendisse\n", ' ');
// 	char **tab = ft_split("tripouille", 0);
// 	size_t index = 0;

// 	// while (ptr[index] != NULL)
// 	// {
// 	// 	ft_putendl_fd(ptr[index], 1);
// 	// 	index++;
// 	// }
// 	while (ptr[index] != NULL)
// 	{
// 		ft_putendl_fd(tab[index], 1);
// 		index++;
// 	}
// }
