/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:58:19 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/05 17:05:58 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//@TODO A TESTER ET MAIN
unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size)
{
	unsigned int	index;

	if (size == 0)
		return (ft_strlen(src));
	index = 0;
	while ((src[index] != '\0') && (index < (size - 1)))
	{
		dst[index] = src[index];
		index++;
	}
	while (index < (size - 1))
	{
		dst[index] = '\0';
		index++;
	}
	dst[index] = '\0';
	return (ft_strlen(src));
}
