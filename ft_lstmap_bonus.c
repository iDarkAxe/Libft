/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:07:33 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/15 21:06:30 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Itère sur la liste ’lst’ et applique la fonction ’f ’au contenu 
 * de chaque élément. Crée une nouvelle liste résultant des applications
 * successives de ’f’. La fonction ’del’ est là pour détruire le contenu 
 * d’un élément si nécessaire.
 * 
 * @param lst 
 * @param f 
 * @param del 
 * @return t_list* 
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	size_t	i;
	t_list	*element;
	t_list	*list;

	i = 0;
	if (lst == NULL || f == NULL)
		return (NULL);
	list = NULL;
	while (lst != NULL)
	{
		element = ft_lstnew((*f)(lst->content));
		if (element == NULL)
			ft_lstclear(&list, del);
		ft_lstadd_back(&list, element);
		lst = lst->next;
	}
	return (list);
}
