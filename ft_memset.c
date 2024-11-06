/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:29:02 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/06 11:23:48 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

//@WIP A TERMINER
/**
 * @brief Set a memory zone with a value, count times
 *
 * @param pointer
 * @param value
 * @param count
 * @return void*
 */
void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char	*new_pointer;
	unsigned int	index;

	new_pointer = (unsigned char *)pointer;
	index = 0;
	while (count > 0)
	{
		new_pointer[index] = (unsigned char)value;
		index++;
		count--;
	}
	return (pointer);
}
