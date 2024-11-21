/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:12:07 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/20 21:32:19 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * @brief Écrit la chaîne de caractères ’s’ sur le descripteur de fichier donné
 *
 * @param s string
 * @param fd file descriptor
 * @return ssize_t nombre de caractere qui ont été écrits
 */
ssize_t	ft_putstr_fd(char *s, int fd)
{
	return (write(fd, s, ft_strlen(s)));
}

/**
 * @brief Écrit la chaîne de caractères ’s’ sur le descripteur de fichier donné
 * jusqu'à une taille donnée ou la longueur de s si len est plus grand
 * 
 * @param s string
 * @param len maximum char to be printed
 * @param fd  nombre de caractere qui ont été écrits
 * @return ssize_t nombre de caractere qui ont été écrits
 */	
ssize_t	ft_putnstr_fd(char *s, size_t len, int fd)
{
	if (len > ft_strlen(s))
		return (write(fd, s, ft_strlen(s)));
	else
		return (write(fd, s, len));
}
