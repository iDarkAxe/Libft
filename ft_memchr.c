/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:06:29 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/16 17:12:35 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Recherche la première occurence d'une valeur typée int,
 * mais interprétée en tant que char
 * @param memory_block
 * @param searched_char
 * @param size
 * @return void*
 */
void	*ft_memchr(const void *memory_block, int searched_char, size_t size)
{
	char	*pointer;
	size_t	index;

	pointer = (char *)memory_block;
	index = 0;
	if (size == 0)
		return (NULL);
	while (size - index - 1 > 0)
	{
		if (pointer[index] == (char)searched_char)
			return ((char *)&pointer[index]);
		index++;
	}
	if (pointer[index] == (char)searched_char)
		return ((char *)&pointer[index]);
	return (NULL);
}
// #include <stdlib.h>
// #include "libft.h"
// #include <unistd.h>
// #include <string.h>
//@TODO MAIN A VERIFIER
// int main(int argc, char **argv)
// {
// 	char str[100] = {0};
// 	char *pointer = "Je suis une phrase et c'est long";
// 	int searched_char;

// 	searched_char = 'e';
// 	ft_putendl_fd(str, 1);
// 	ft_putstr_fd("Resultat attendu : ", 1);
// 	write(1, memchr(str, searched_char, 100), 1);
// 	ft_putendl_fd("", 1);
// 	ft_putstr_fd("Resultat test   : ", 1);
// 	write(1, ft_memchr(str, searched_char, 100), 1);
// 	ft_putendl_fd("", 1);
// 	ft_putendl_fd("     -----     ", 1);
// 	searched_char = 'z';
// 	ft_putendl_fd(str, 1);
// 	ft_putstr_fd("Resultat attendu : ", 1);
// 	write(1, memchr(str, searched_char, 100), 1);
// 	ft_putendl_fd("", 1);
// 	ft_putstr_fd("Resultat test   : ", 1);
// 	write(1, ft_memchr(str, searched_char, 100), 1);
// 	ft_putendl_fd("", 1);
// 	ft_putendl_fd("     -----     ", 1);
// }
