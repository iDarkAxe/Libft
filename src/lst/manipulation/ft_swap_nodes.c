/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_nodes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 12:15:44 by ppontet           #+#    #+#             */
/*   Updated: 2025/02/17 12:02:27 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap_nodes(t_list **start, t_list *lst1, t_list *lst2)
{
	t_list	*tmp;
	t_list	*prev1;
	t_list	*prev2;

	prev1 = find_prev(*start, lst1);
	prev2 = find_prev(*start, lst2);
	if (!start || !lst1 || !lst2 || lst1 == lst2)
		return ;
	swap_pointers(start, prev1, lst1, lst2);
	swap_pointers(start, prev2, lst2, lst1);
	tmp = lst1->next;
	lst1->next = lst2->next;
	lst2->next = tmp;
}

static t_list	*find_prev(t_list *start, t_list *node)
{
	t_list	*prev;

	prev = NULL;
	while (start && start->next)
	{
		if (start->next == node)
			return (start);
		start = start->next;
	}
	return (NULL);
}

static void	swap_pointers(t_list **start, t_list *prev, t_list *old,
		t_list *new)
{
	if (prev)
		prev->next = new;
	else
		*start = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list *lst = ft_lstnew("1");
// 	t_list *lst1 = ft_lstnew("2");
// 	t_list *lst2 = ft_lstnew("3");
// 	t_list *lst3 = ft_lstnew("4");
// 	t_list *lst4 = ft_lstnew("5");
// 	t_list *lst5 = ft_lstnew("6");

// 	lst->next = lst1;
// 	lst1->next = lst2;
// 	lst2->next = lst3;
// 	lst3->next = lst4;
// 	lst4->next = lst5;

// 	printf("Before swap:\n");
// 	t_list *tmp = lst;
// 	while (tmp)
// 	{
// 		printf("[%p] is %s -> ", tmp, (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	printf("NULL\n");

// 	ft_swap_nodes(&lst, lst1, lst);

// 	printf("\nAfter swap:\n");
// 	tmp = lst;
// 	while (tmp)
// 	{
// 		printf("[%p] is %s -> ", tmp, (char *)tmp->content);
// 		// printf("%s -> ", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	printf("NULL\n");

// 	return (0);
// }