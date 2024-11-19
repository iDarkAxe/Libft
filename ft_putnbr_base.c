/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:31:04 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/19 11:39:22 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * @brief Putnbr with a particular base
 *
 * @param nbr
 * @param base
 */
void	ft_putnbr_base(int nbr, char *base)
{
	int			base_nbr;
	long int	nb;

	nb = nbr;
	base_nbr = ft_check_base_putnbr(base);
	if (base_nbr < 1)
		return ;
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb >= base_nbr)
	{
		ft_putnbr_base(nb / base_nbr, base);
		ft_putnbr_base(nb % base_nbr, base);
	}
	else
		write(1, &base[nb], 1);
}

/**
 * @brief Putnbr for binary
 *
 * @param nbr
 */
void	ft_putnbr_bin(int nbr)
{
	ft_putnbr_base(nbr, "01");
}

/**
 * @brief Putnbr for poneyvif
 *
 * @param nbr
 */
// void	ft_putnbr_poneyvif(int nbr)
// {
// 	ft_putnbr_base(nbr, "poneyvif");
// }

/**
 * @brief Putnbr for octal
 *
 * @param nbr
 */
void	ft_putnbr_oct(int nbr)
{
	ft_putnbr_base(nbr, "01234567");
}

/**
 * @brief Putnbr for hex or HEX
 *
 * @param nbr
 * @param height
 */
void	ft_putnbr_hex(int nbr, char height)
{
	char	base[17];

	if (height == 1 || height == 'x')
		ft_strlcpy(base, "0123456789abcdef\0", 17);
	else
		ft_strlcpy(base, "0123456789ABCDEF\0", 17);
	ft_putnbr_base(nbr, base);
}

// int	main(void)
// {
// 	//char	base_bin[] = "01";
// 	//char	base_oct[] = "poneyvif";
// 	//char	base_dec[] = "0123456789";
// 	//char	base_hex[] = "0123456789abcdef";
// 	write(1, "ici:", 4);
// 	ft_putnbr_base(1598, "-2");
// }
