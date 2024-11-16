/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:09:32 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/16 16:33:19 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @brief Ecrit le caractere 'c' sur le descripteur de fichier
 *
 * @param c character
 * @param fd file descriptor
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
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
// 	int searched_char;
// 	int fd;

// 	searched_char = 'O';
// 	fd = 1;
// 	ft_putstr_fd("Resultat test   : ", fd);
// 	ft_putchar_fd(searched_char, fd);
// 	ft_putendl_fd("", fd);
// 	ft_putendl_fd("     -----     ", fd);
// 	searched_char = 'E';
// 	fd = 2;
// 	ft_putstr_fd("Resultat test   : ", fd);
// 	ft_putchar_fd(searched_char, fd);
// 	ft_putendl_fd("", fd);
// 	ft_putendl_fd("     -----     ", fd);
// }
