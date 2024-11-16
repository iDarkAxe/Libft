/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:33:04 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/16 16:32:48 by ppontet          ###   ########lyon.fr   */
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
	size_t			index;

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

// #include <stdlib.h>
// #include "libft.h"
// #include <unistd.h>
// #include <string.h>

// int main(int argc, char **argv)
// {
// 	char str[100] = {0};
// 	char *pointer = "Je suis une phrase et c'est long";

// 	ft_putendl_fd(str, 1);
// 	ft_strlcpy(str, pointer, ft_strlen(pointer));
// 	ft_putstr_fd("Resultat attendu : ", 1);
// 	bzero(str, 10);
// 	write(1, str, 20);
// 	ft_putendl_fd("", 1);
// 	ft_putstr_fd("Resultat test   : ", 1);
// 	ft_strlcpy(str, pointer, ft_strlen(pointer));
// 	ft_bzero(str, 10);
// 	write(1, str, 20);
// 	ft_putendl_fd("", 1);
// 	ft_putendl_fd("     -----     ", 1);
// }
