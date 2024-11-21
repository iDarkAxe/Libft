/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:14:17 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/20 21:31:21 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * @brief Écrit la chaîne de caractères ’s’ sur le descripteur de fichier,
 * suivi d'un retour a la ligne
 * @param s string
 * @param fd file descriptor
 * @return ssize_t number of char printed
 */
ssize_t	ft_putendl_fd(char *s, int fd)
{
	return (ft_putstr_fd(s, fd) + write(fd, "\n", 1));
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
