/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:14:17 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/19 13:56:51 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * @brief Écrit la chaîne de caractères ’s’ sur le descripteur de fichier,
 * suivi d'un retour a la ligne
 * @param s string
 * @param fd file descriptor
 */
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/**
 * @brief Écrit la chaîne de caractères ’s’ sur le descripteur de fichier,
 * suivi d'un retour a la ligne jusqu'à une taille donnée ou la longueur 
 * de s si len est plus grand
 * 
 * @param s string
 * @param len maximum char to be printed
 * @param fd file descriptor
 * @return ssize_t nombre de caractere qui ont été écrits
 */
ssize_t	ft_putnendl_fd(char *s, size_t len, int fd)
{
	return (ft_putnstr_fd(s, len, fd) + write(fd, "\n", 1));
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
// 	ft_putendl_fd(pointer, fd);
// 	ft_putendl_fd(pointer, fd);
// 	ft_putendl_fd("", fd);
// 	ft_putendl_fd("     -----     ", fd);
// 	fd = 2;
// 	ft_putstr_fd("Resultat test   : ", fd);
// 	ft_putendl_fd(pointer2, fd);
// 	ft_putendl_fd(pointer2, fd);
// 	ft_putendl_fd("", fd);
// 	ft_putendl_fd("     -----     ", fd);
// }
