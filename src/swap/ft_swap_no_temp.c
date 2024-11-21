/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_no_temp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:48:40 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/21 21:17:26 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Works similarly as ft_swap_int but doens't use temporary variable
 * SHOULD NOT BE USED IF a and b points at the same adress
 * 
 * @param a 
 * @param b 
 */
void ft_swap_int_no_temp(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

/**
 * @brief Works similarly as ft_swap_char but doens't use temporary variable
 * SHOULD NOT BE USED IF a and b points at the same adress
 * 
 * @param a 
 * @param b 
 */
void ft_swap_char_no_temp(char *a, char *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

//SWAPPING strs without temp shouldn't be possible as you should XOR all blocks and a(len) needs to equal b(len)