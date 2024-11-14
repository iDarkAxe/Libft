/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:12:07 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/14 16:07:51 by ppontet          ###   ########lyon.fr   */
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
