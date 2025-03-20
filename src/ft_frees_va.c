/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frees_va.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:58:40 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/20 12:44:44 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * @brief Frees multiple pointers using va_list
 * 
 * @param ptr first pointer
 */
void	ft_frees_va(void *ptr, ...)
{
	va_list	arg_ptr;
	void	*temp;
	size_t	index;

	index = 0;
	va_start(arg_ptr, ptr);
	free(ptr);
	while (1)
	{
		temp = va_arg(arg_ptr, void *);
		if (temp == NULL)
			break ;
		free(temp);
	}
	va_end(arg_ptr);
}
