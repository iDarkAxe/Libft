/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:07:24 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/16 15:43:40 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>

//@TODO MAIN
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
	size_t			nbr_element;

	if (element_size == 0 || element_count == 0)
		return (malloc(0));
	if (SIZE_MAX / element_size < element_count
		|| SIZE_MAX / element_count < element_size)
		return (NULL);
	nbr_element = element_size * element_count;
	pointer = malloc(nbr_element);
	if (pointer == NULL)
		return (NULL);
	ft_bzero(pointer, nbr_element);
	return (pointer);
}
