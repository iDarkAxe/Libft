/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:16:24 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/11 18:43:28 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//@TODO REFAIRE un putnbr mais avec un filedescriptor
/**
 * @brief Écrit l’entier ’n’ sur le descripteur de fichier donné
 *
 * @param n
 * @param fd
 */
void	ft_putnbr_fd(int n, int fd)
{
	int	temp;

	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(fd, "-2147483648", 11);
			return ;
		}
		else
		{
			n = -n;
			write(fd, "-", 1);
		}
	}
	temp = n % 10 + '0';
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		write(fd, &temp, 1);
}
