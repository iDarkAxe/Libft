/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:43:34 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/18 19:31:42 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen(char *str);
static int	base_check(char *base);
static int	pos_base(char str, char *base);
static int	is_in_base(char str, char *base);

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
	if (!base_check(base))
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
		value *= ft_strlen(base);
		value += pos_base(str[i], base);
		i++;
	}
	return (value * sign);
}

/**
 * @brief Check if base is valid
 * 
 * @param base 
 * @return int 
 */
static int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if ((base[j] == base[i] || base[j] == '+' || base[j] == '-'
					|| (base[j] >= 9 && base[j] <= 13) || base[j] == ' ')
				&& i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

//REFLECHIR A LE FAIRE AVEC STRCHR
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
