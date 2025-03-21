/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:12:07 by ppontet           #+#    #+#             */
/*   Updated: 2025/02/17 18:25:05 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * @brief Print the string 's' on the file descriptor
 *
 * @param s string to print
 * @param fd file descriptor
 * @return ssize_t nombre de caractere qui ont été écrits
 */
ssize_t	ft_putstr_fd(char *s, int fd)
{
	return (write(fd, s, ft_strlen(s)));
}

/**
 * @brief Print the string 's' on the file descriptor until a given size
 * or the length of s if len is greater
 *
 * @param s string to print
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
