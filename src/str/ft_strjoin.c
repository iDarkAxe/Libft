/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:58:40 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/12 14:51:08 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Alloue une nouvelle chaine, et retourne le resultat de 
 * la concatenation de s1 et s2
 * @param s1 
 * @param s2 
 * @return char* 
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pointer;
	size_t	len;
	size_t	s1_len;
	size_t	index;

	index = 0;
	s1_len = ft_strlen(s1);
	len = s1_len + ft_strlen(s2);
	pointer = malloc(sizeof(char) * (len + 1));
	if (pointer == NULL)
		return (NULL);
	while (s1[index] != '\0')
	{
		pointer[index] = s1[index];
		index++;
	}
	index = 0;
	while (s2[index] != '\0' && index < len - s1_len)
	{
		pointer[index + s1_len] = s2[index];
		index++;
	}
	pointer[index + s1_len] = '\0';
	return (pointer);
}
