/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:58:19 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/06 15:26:22 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Copy of src into dst, up to size bytes
 *
 * @param dst
 * @param src
 * @param size
 * @return unsigned int size of src
 */
unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	index = 0;
	while ((src[index] != '\0') && (index < (size - 1)))
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (src_len);
}
