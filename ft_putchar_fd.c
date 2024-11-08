/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:09:32 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/08 18:13:01 by ppontet          ###   ########lyon.fr   */
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
