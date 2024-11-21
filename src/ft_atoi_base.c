/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:43:34 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/19 11:38:55 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	pos_base(char str, char *base);
static int	is_in_base(char str, char *base);

//@TODO TESTER si le ft_strlen en size_t fonctionne (previously int)

/**
 * @brief Atoi with a particular base
 * 
 * @param str 
 * @param base 
 * @return int 
 */
int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	i;
	int	value;

	value = 0;
	i = 0;
	sign = 1;
	if (!ft_check_base_atoi(base))
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (is_in_base(str[i], base))
	{
		value *= (int)ft_strlen(base);
		value += pos_base(str[i], base);
		i++;
	}
	return (value * sign);
}

//@WIP REFLECHIR A LE FAIRE AVEC STRCHR
/**
 * @brief Search a character in base 
 * 
 * @param str 
 * @param base 
 * @return int 
 */
static int	pos_base(char character, char *base)
{
	int	i;

	i = 0;
	while (character != base[i])
		i++;
	return (i);
}

static int	is_in_base(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (1);
		i++;
	}
	return (0);
}
