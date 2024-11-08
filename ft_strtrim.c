/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:59:56 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/08 18:20:14 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h> //A SUPPRIMER

static size_t			str_count_similarities(char const *s1, char const *s2);
static unsigned char	str_char_cmp(char character, char const *str);

/**
 * @brief Supprime tout les caracteres qui existent dans s1 et set,
	s'il sont au debut de la string
 *
 * @param s1
 * @param set
 * @return char*
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	nbr_char_to_trimm;
	size_t	index_set;
	char	*pointer;

	s1_len = 0;
	nbr_char_to_trimm = 0;
	while (s1[s1_len] != '\0')
		s1_len++;
	nbr_char_to_trimm = str_count_similarities(s1, set);
	pointer = malloc(sizeof(char) * (s1_len - nbr_char_to_trimm + 1));
	if (pointer == NULL)
		return (NULL);
	index_set = 0;
	while (s1_len > 0)
	{
		if (str_char_cmp(s1[index_set], set) == 1)
			pointer[index_set] = s1[index_set];
		index_set++;
	}
	return (pointer);
}

/**
 * @brief Count number of characters that exist in the two strings
 *
 * @param s1
 * @param s2
 * @return size_t number of similarities
 */
static size_t	str_count_similarities(char const *s1, char const *s2)
{
	size_t	similarities;
	size_t	index_set;

	similarities = 0;
	index_set = 0;
	while (*s1 != '\0')
	{
		index_set = 0;
		while (s2[index_set] != '\0')
		{
			// printf("%c\n", s2[index_set]);
			if (*s1 == s2[index_set])
				similarities++;
			index_set++;
		}
		s1++;
	}
	return (similarities);
}

/**
 * @brief Check if char exist in str
 *
 * @param character
 * @param str
 * @return unsigned char 0, not found, 1 char found
 */
static unsigned char	str_char_cmp(char character, char const *str)
{
	while (*str != '\0')
	{
		if (character == *str)
			return (1);
		str++;
	}
	return (0);
}

int	main(void)
{
	char	*string;
	char	*set;
	char	*pointer;

	string = "xxxz  test with x and z and x .  zx  xx z\0";
	set = "z x\0";
	pointer = ft_strtrim(string, set);
	printf("return %s", pointer);
}
