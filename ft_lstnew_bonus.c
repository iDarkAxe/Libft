/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:55:29 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/15 17:57:21 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Alloue (avec malloc(3)) et renvoie un nouvel élément. 
 * La variable membre ’content’ est initialisée à l’aide de la valeur 
 * du paramètre ’content’. La variable ’next’ est initialisée à NULL.
 * 
 * @param content 
 * @return t_list* 
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (element == NULL)
		return (NULL);
	if (content == NULL)
		element->content = NULL;
	else
		element->content = content;
	element->next = NULL;
	return (element);
}
