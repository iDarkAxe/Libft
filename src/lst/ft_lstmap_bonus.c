/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:07:33 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/16 14:52:49 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*element_content_failed(t_list *list_start,
					void (*del)(void *));
static t_list	*element_failed(t_list *list_start,
					void *element_content, void (*del)(void *));

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
	t_list	*list_start;
	t_list	*element;
	void	*element_content;

	if (lst == NULL || f == NULL)
		return (NULL);
	list_start = NULL;
	while (lst != NULL)
	{
		element_content = (*f)(lst->content);
		if (element_content == NULL)
			return (element_content_failed(list_start, del));
		element = ft_lstnew(element_content);
		if (element == NULL)
			return (element_failed(list_start, element_content, del));
		ft_lstadd_back(&list_start, element);
		lst = lst->next;
	}
	return (list_start);
}

/**
 * @brief Verify if element_content assignment has failed,
	and clear list if failed
 *
 * @param list_start
 * @param element_content
 * @param del
 * @return t_list*
 */
static t_list	*element_content_failed(t_list *list_start,
		void (*del)(void *))
{
	ft_lstclear(&list_start, del);
	return (NULL);
}

/**
 * @brief Verify if element assignment has failed, and clear list if failed
 *
 * @param list_start
 * @param element
 * @param element_content
 * @param del
 * @return t_list*
 */
static t_list	*element_failed(t_list *list_start,
		void *element_content, void (*del)(void *))
{
	(*del)(element_content);
	ft_lstclear(&list_start, del);
	return (NULL);
}
