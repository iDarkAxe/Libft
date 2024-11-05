/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:59:13 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/05 17:05:56 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//@TODO A TESTER ET MAIN
unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	unsigned int	index;
	int				end_of_dst;

	index = 0;
	end_of_dst = 0;
	while (dst[index] != '\0')
	{
		end_of_dst++;
		index++;
	}
	index = 0;
	while ((src[index] != '\0') && (index < size))
	{
		dst[index + end_of_dst] = src[index];
		index++;
	}
	dst[index + end_of_dst] = '\0';
	return (index);
}
