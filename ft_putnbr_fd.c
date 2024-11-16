/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:16:24 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/16 16:54:17 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

// #include "libft.h"
// #include <stdio.h>

// int main(int argc, char **argv)
// {
// 	char str[100] = {0};
// 	int number;
// 	int fd;

// 	fd = 1;
// 	number = (int)51996519858184;
// 	ft_putstr_fd("Resultat test   : ", fd);
// 	ft_putnbr_fd(number, fd);
// 	ft_putendl_fd("", fd);
// 	printf("Resultat attendu   : %d\n", number);
// 	ft_putendl_fd("", fd);
// 	number = (int)5084;
// 	ft_putstr_fd("Resultat test   : ", fd);
// 	ft_putnbr_fd(number, fd);
// 	ft_putendl_fd("", fd);
// 	printf("Resultat attendu   : %d\n", number);
// }
