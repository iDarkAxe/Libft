/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:59:56 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/11 16:42:27 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * @brief Supprime tout les caracteres qui existent dans s et set,
	s'il sont au debut de la string ou a la fin
 *
 * @param s
 * @param set
 * @return char*
 */
char	*ft_strtrim(char const *s, char const *set)
{
	size_t	index;
	char	*pointer;
	size_t	start;
	size_t	end;

	start = 0;
	index = 0;
	while (s[start] && ft_strchr(set, s[start]))
		start++;
	end = ft_strlen(s);
	while (end > start && ft_strchr(set, s[end - 1]))
		end--;
	pointer = malloc(sizeof(char) * (end - start + 1));
	if (pointer == NULL)
		return (NULL);
	while (start + index < end)
	{
		pointer[index] = s[start + index];
		index++;
	}
	pointer[index] = '\0';
	return (pointer);
}

// int	main(void)
// {
// 	char	*pointer;
// 	char	s1[] = "lorem \n ipsum \t dolor \n sit \t amet";

// 	// char	*string;
// 	// char	*set;
// 	// string = "xxxz  test with x and z and x .  zx  xx z\0";
// 	// set = "z x\0";
// 	pointer = ft_strtrim(s1, " ");
// 	printf("retour %s", pointer);
// }

/**
 * @brief Count number of characters that exist in the two strings
 *
 * @param s
 * @param s2
 * @return size_t number of similarities
 */
// static size_t	str_count_similarities(char const *s, char const *s2)
// {
// 	size_t	similarities;
// 	size_t	index_set;

// 	similarities = 0;
// 	index_set = 0;
// 	while (*s != '\0')
// 	{
// 		index_set = 0;
// 		while (s2[index_set] != '\0')
// 		{
// 			if (*s == s2[index_set])
// 				similarities++;
// 			index_set++;
// 		}
// 		s++;
// 	}
// 	return (similarities);
// }
