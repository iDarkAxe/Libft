/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:12:07 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/16 16:55:46 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * @brief Écrit la chaîne de caractères ’s’ sur le descripteur de fichier donné
 *
 * @param s string
 * @param fd file descriptor
 */
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

// #include "libft.h"
// // A TESTER avec la commande ./a.out 1>stdout.txt 2>stderr.txt
// // ET cat stdout.txt
// // ET cat stderr.txt
// // par defaut, le terminal affiche stdout et stderr au meme endroit
// int main(int argc, char **argv)
// {
// 	char str[100] = {0};
// 	char *pointer = "Je suis une phrase et c'est long";
// 	char *pointer2 = "Je suis une erreur";
// 	int searched_char;
// 	int fd;

// 	fd = 1;
// 	ft_putstr_fd("Resultat test   : ", fd);
// 	ft_putstr_fd(pointer, fd);
// 	ft_putstr_fd(pointer, fd);
// 	ft_putendl_fd("", fd);
// 	ft_putendl_fd("     -----     ", fd);
// 	fd = 2;
// 	ft_putstr_fd("Resultat test   : ", fd);
// 	ft_putstr_fd(pointer2, fd);
// 	ft_putstr_fd(pointer2, fd);
// 	ft_putendl_fd("", fd);
// 	ft_putendl_fd("     -----     ", fd);
// }
