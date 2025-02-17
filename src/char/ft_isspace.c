/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 11:58:57 by ppontet           #+#    #+#             */
/*   Updated: 2025/02/17 17:04:33 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Check if arg is a whitespace
 *
 * @param character character to check
 * @return int 0 not space, anything else is a whitespace
 */
int	ft_isspace(int character)
{
	if ((character >= 9 && character <= 13) || (character == ' '))
		return (character);
	return (0);
}

/**
 * @brief Alternative name for ft_isspace
 * 
 * @param character 
 * @return int 
 */
int	ft_iswhitespace(int character)
{
	return (ft_isspace(character));
}
