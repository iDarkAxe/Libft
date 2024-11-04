/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:32:05 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/04 16:33:24 by ppontet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//could return 1024 or 0x10000000000 instead of 1
/**
 * @brief Check if arg is in ascii table
 * 
 * @param character 
 * @return int 0 not in ascii table, anything else if in ascii table
 */
int ft_isprint (int character)
{
	if ((character >= 32 && character <= 127))
		return (1);	
	return (0);
}
