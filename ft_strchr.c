/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:15:41 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/05 13:32:05 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *string, int searchedChar)
{
	unsigned int	i;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == searchedChar)
			return (&string[i]);
		i++;
	}
	return (NULL);
}
