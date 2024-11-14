/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:45:58 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/14 16:58:07 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> //@TODO A SUUPPRIMER
#include <stdlib.h>

static void		ft_free_malloc(char **ptr_ptr, size_t count);
static char		*ft_strndup(const char *source, size_t len);
static char		*ft_strchr_end(const char *string, int searched_char);
static size_t	str_count_char(char const *s, char c);
//@WIP A FAIRE

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
	char	*next_pointer;
	size_t	count;

	count = 0;
	ptr_ptr = malloc(sizeof(char *) * (str_count_char(s, c) + 1));
	if (ptr_ptr == NULL)
		return (NULL);
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		next_pointer = ft_strchr_end(s, c);
		ptr_ptr[count] = ft_strndup(s, next_pointer - s);
		if (ptr_ptr[count++] == NULL)
		{
			ft_free_malloc(ptr_ptr, count - 1);
			return (NULL);
		}
		s = next_pointer + (*next_pointer == c);
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
char	*ft_strchr_end(const char *string, int searched_char)
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

/**
 * @brief Create a copy of source into a new pointer of size len
 *	NEEDS to be freed
 * @param source
 * @return char*
 */
static char	*ft_strndup(const char *source, size_t len)
{
	char	*pointer;
	size_t	index;

	pointer = malloc(sizeof(char) * (len + 1));
	if (pointer == NULL)
		return (NULL);
	index = 0;
	while (index < len)
	{
		pointer[index] = source[index];
		index++;
	}
	pointer[len] = '\0';
	return (pointer);
}

int main(void)
{
	char **ptr = ft_split("lorem ipsum dolor sit amet, \
			consectetur adipiscing elit. Sed non risus. Suspendisse\n", ' ');
	char **tab = ft_split("tripouille", 0);
	size_t index = 0;

	// while (ptr[index] != NULL)
	// {
	// 	ft_putendl_fd(ptr[index], 1);
	// 	index++;
	// }
	while (ptr[index] != NULL)
	{
		ft_putendl_fd(tab[index], 1);
		index++;
	}
}

// BACKUP
// static size_t	str_count_char(char const *s, char c)
// {
// 	size_t count;

// 	count = 0;
// 	while (*s != '\0')
// 	{
// 		if ((s + 1) != ft_strchr(s, c))
// 			count++;
// 		s++;
// 	}
// 	return (count);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**ptr_ptr;
// 	char	*next_pointer;
// 	size_t	count;

// 	count = 0;
// 	ptr_ptr = malloc(sizeof(char*) * (str_count_char(s, c) + 1));
// 	if (!ptr_ptr)
// 		return (NULL);

// 	while (*s)
// 	{
// 		// Ignore les délimiteurs consécutifs
// 		while (*s == c)
// 			s++;

// 		// Si la chaîne est vide après avoir sauté les délimiteurs, on sort
// 		if (*s == '\0')
// 			break ;

// 		// Trouve la prochaine occurrence du délimiteur
// 		next_pointer = ft_strchr(s, c);
// 		if (next_pointer == NULL)
// 			next_pointer = (char *)s + ft_strlen(s);
				// Jusqu'à la fin de la chaîne

// 		// Allouer et copier la sous-chaîne
// 		ptr_ptr[count] = ft_strndup(s, next_pointer - s);
// 		if (!ptr_ptr[count])
// 		{
// 			ft_free_malloc(ptr_ptr, count);
// 			return (NULL);
// 		}

// 		// Avancer le pointeur
// 		s = next_pointer;

// 		count++;
// 	}
// 	ptr_ptr[count] = NULL;  // Terminer le tableau par NULL
// 	return (ptr_ptr);
// }