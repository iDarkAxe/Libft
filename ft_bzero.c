/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:33:04 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/06 15:18:22 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Met à 0, les n premiers octets de la string
 *
 * @param s
 * @param n
 */
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*new_pointer;
	unsigned int	index;

	new_pointer = (unsigned char *)s;
	index = 0;
	while (n > 0)
	{
		new_pointer[index] = 0;
		index++;
		n--;
	}
	return ;
}
