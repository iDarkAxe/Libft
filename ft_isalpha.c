/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:28:33 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/04 16:00:57 by ppontet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//could return 1024 or 0x10000000000 instead of 1
/**
 * @brief Check if arg is a char
 * 
 * @param character 
 * @return int 0 not char, anything else is char
 */
int ft_isalpha (int character)
{
	if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
		return (1);	
	return (0);
}
