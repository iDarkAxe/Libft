/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:07:24 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/07 15:30:22 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

/**
 * @brief Alloue une nouvelle zone memoire, et met les bits à zero
 *
 * @param element_count
 * @param element_size
 * @return void*
 */
void	*ft_calloc(size_t element_count, size_t element_size)
{
	void			*pointer;
	unsigned char	*new_pointer;
	size_t			index;
	size_t			nbr_element;

	nbr_element = element_size * element_count;
	pointer = malloc(nbr_element);
	if (pointer == NULL)
		return (NULL);
	new_pointer = (unsigned char *)pointer;
	index = 0;
	while (nbr_element > 0)
	{
		new_pointer[index] = 0;
		index++;
		nbr_element--;
	}
	return (pointer);
}
