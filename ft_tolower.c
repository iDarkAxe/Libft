/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:54:11 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/05 13:11:40 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Transform all majuscules into minuscules
 *
 * @param character
 * @return character in minuscules if was in majuscules
	OR character isn´t majuscules
 */
int	ft_tolower(int character)
{
	if ((character >= 'A' && character <= 'Z'))
		return (character + 32);
	return (character);
}
