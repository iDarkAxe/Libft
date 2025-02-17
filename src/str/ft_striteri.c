/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:28:57 by ppontet           #+#    #+#             */
/*   Updated: 2025/02/17 18:27:11 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Iterate the function f on string s
 * 
 * @param s string to iterate
 * @param f function to apply
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!(*s != 0 && f != 0))
		return ;
	while (*s != '\0')
	{
		f(i++, s++);
	}
	return ;
}
