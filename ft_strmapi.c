/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:46:19 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/11 18:35:17 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * @brief Applique la fonction ’f’ à chaque caractère de la chaîne de
 * caractères ’s’, passant son index comme premier argument et le caractère
 * lui-même comme second argument.
 * @param s
 * @param f
 * @return char*
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*pointer;

	if (!(*s != 0 || f != 0))
		return (NULL);
	pointer = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (pointer == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		pointer[i] = (*f)(i, s[i]);
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}
