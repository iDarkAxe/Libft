/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:12:07 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/08 18:13:47 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @brief Écrit la chaîne de caractères ’s’ sur le descripteur de fichier donné
 *
 * @param s string
 * @param fd file descriptor
 */
void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, &s, 1);
		s++;
	}
}
