/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:33:04 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/05 17:02:40 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

//@WIP A TERMINER
/**
 * @brief Met à 0, les n premiers octets de la string
 *
 * @param s
 * @param n
 */
void	ft_bzero(void *s, size_t n)
{
	int	*new_pointer;

	new_pointer = (int *)s;
	while (n > 0)
	{
		*(new_pointer + n) = 0;
		n--;
	}
	return ;
}
