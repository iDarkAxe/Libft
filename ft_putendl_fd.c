/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:14:17 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/08 18:15:28 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @brief Écrit la chaîne de caractères ’s’ sur le descripteur de fichier,
 * suivi d'un retour a la ligne
 * @param s string
 * @param fd file descriptor
 */
void	ft_putendl_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, &s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
