/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:03:21 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/05 13:13:02 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// could return 1024 or 0x10000000000 instead of 1
/**
 * @brief Check if arg is a char or a digit
 *
 * @param character
 * @return int 0 not char, anything else is char or digit
 */
int	ft_isalnum(int character)
{
	if ((character >= 'a' && character <= 'z') || (character >= 'A'
			&& character <= 'Z') || (character >= '0' && character <= '9'))
		return (1);
	return (0);
}
